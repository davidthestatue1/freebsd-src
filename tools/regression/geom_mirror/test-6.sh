#!/bin/sh
# $FreeBSD: src/tools/regression/geom_mirror/test-6.sh,v 1.1 2004/07/30 23:13:45 pjd Exp $

name="test"
base=`basename $0`
balance="split"
us0=45
us1=`expr $us0 + 1`
us2=`expr $us0 + 2`
ddbs=8192
nblocks1=1024
nblocks2=`expr $nblocks1 / \( $ddbs / 512 \)`
src=`mktemp /tmp/$base.XXXXXX` || exit 1
dst=`mktemp /tmp/$base.XXXXXX` || exit 1

dd if=/dev/random of=${src} bs=$ddbs count=$nblocks2 >/dev/null 2>&1

mdconfig -a -t malloc -s `expr $nblocks1 + 1` -u $us0 || exit 1
mdconfig -a -t malloc -s `expr $nblocks1 + 1` -u $us1 || exit 1
mdconfig -a -t malloc -s `expr $nblocks1 + 1` -u $us2 || exit 1
sleep 1

gmirror label -b $balance -s `expr $ddbs / 2` $name /dev/md${us0} /dev/md${us1} || exit 1

dd if=${src} of=/dev/mirror/${name} bs=$ddbs count=$nblocks2 >/dev/null 2>&1
dd if=/dev/zero of=/dev/md${us2} bs=$ddbs count=$nblocks2 >/dev/null 2>&1

dd if=/dev/mirror/${name} of=${dst} bs=$ddbs count=$nblocks2 >/dev/null 2>&1
if [ `md5 -q ${src}` != `md5 -q ${dst}` ]; then
	echo "FAIL"
else
	echo "PASS"
fi

# Connect disk to the mirror.
gmirror insert ${name} md${us2}
# Wait for synchronization.
sleep 1
dd if=/dev/md${us2} of=${dst} bs=$ddbs count=$nblocks2 >/dev/null 2>&1
if [ `md5 -q ${src}` != `md5 -q ${dst}` ]; then
	echo "FAIL"
else
	echo "PASS"
fi

gmirror remove $name md${us0} md${us1} md${us2}
mdconfig -d -u $us0
mdconfig -d -u $us1
mdconfig -d -u $us2
rm -f ${src} ${dst}
