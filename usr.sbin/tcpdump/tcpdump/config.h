/* $FreeBSD: src/usr.sbin/tcpdump/tcpdump/config.h,v 1.1.2.3 2001/08/01 00:35:04 fenner Exp $ */
/* This is an edited copy of the config.h generated by configure. */

/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */
/* "generated automatically" means DO NOT MAKE CHANGES TO config.h.in --
 * make them to acconfig.h and rerun autoheader */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
/* #undef WORDS_BIGENDIAN */

/* Define if you have SSLeay 0.9.0b with the buggy cast128. */
/* #undef HAVE_BUGGY_CAST128 */

/* Define if you enable IPv6 support */
/* Handled by Makefile, to allow NOINET6 */
/* #define INET6 1 */

/* Define if you enable support for the libsmi. */
/* #undef LIBSMI */

/* define if you have struct __res_state_ext */
#define HAVE_RES_STATE_EXT 1

/* define if your struct __res_state has the nsort member */
#define HAVE_NEW_RES_STATE 1

/* define if you have the addrinfo function. */
#define HAVE_ADDRINFO 1

/* define if you need to include missing/addrinfoh.h. */
/* #undef NEED_ADDRINFO_H */

/* define ifyou have the h_errno variable. */
#define HAVE_H_ERRNO 1

/* define if IN6ADDRSZ is defined (XXX not used!) */
#define HAVE_IN6ADDRSZ 1

/* define if INADDRSZ is defined (XXX not used!) */
#define HAVE_INADDRSZ 1

/* define if this is a development version, to use additional prototypes. */
/* #undef HAVE_OS_PROTO_H */

/* define if RES_USE_INET6 is defined */
#define HAVE_RES_USE_INET6 1

/* define if struct sockaddr has the sa_len member */
#define HAVE_SOCKADDR_SA_LEN 1

/* define if you have struct sockaddr_storage */
#define HAVE_SOCKADDR_STORAGE 1

/* define if you have both getipnodebyname() and getipnodebyaddr() */
#define USE_GETIPNODEBY 1

/* define if unaligned memory accesses fail */
/* #undef LBL_ALIGN */

/* The successful return value from signal (?)XXX */
#define RETSIGVAL 

/* Define this on IRIX */
/* #undef _BSD_SIGNALS */

/* For HP/UX ANSI compiler? */
/* #undef _HPUX_SOURCE */

/* AIX hack. */
/* #undef _SUN */

/* Workaround for missing sized types */
/* XXX this should move to the more standard uint*_t */
/* #undef int16_t */
/* #undef int32_t */
/* #undef u_int16_t */
/* #undef u_int32_t */
/* #undef u_int8_t */

/* The number of bytes in a char.  */
#define SIZEOF_CHAR 1

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

/* Define if you have the bpf_dump function.  */
#define HAVE_BPF_DUMP 1

/* Define if you have the ether_ntohost function.  */
#define HAVE_ETHER_NTOHOST 1

/* Define if you have the freeaddrinfo function.  */
#define HAVE_FREEADDRINFO 1

/* Define if you have the getaddrinfo function.  */
#define HAVE_GETADDRINFO 1

/* Define if you have the getipnodebyaddr function.  */
#define HAVE_GETIPNODEBYADDR 1

/* Define if you have the getipnodebyname function.  */
#define HAVE_GETIPNODEBYNAME 1

/* Define if you have the getnameinfo function.  */
#define HAVE_GETNAMEINFO 1

/* Define if you have the inet_aton function.  */
#define HAVE_INET_ATON 1

/* Define if you have the inet_ntop function.  */
#define HAVE_INET_NTOP 1

/* Define if you have the inet_pton function.  */
#define HAVE_INET_PTON 1

/* Define if you have the pfopen function.  */
/* #undef HAVE_PFOPEN */

/* Define if you have the setlinebuf function.  */
#define HAVE_SETLINEBUF 1

/* Define if you have the sigaction function.  */
#define HAVE_SIGACTION 1

/* Define if you have the sigset function.  */
/* #undef HAVE_SIGSET */

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the strcasecmp function.  */
#define HAVE_STRCASECMP 1

/* Define if you have the strlcat function.  */
#define HAVE_STRLCAT 1

/* Define if you have the strlcpy function.  */
#define HAVE_STRLCPY 1

/* Define if you have the vfprintf function.  */
#define HAVE_VFPRINTF 1

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF 1

/* Define if you have the <cast.h> header file.  */
/* Handled by Makefile, to allow optional crypto */
/* #define HAVE_CAST_H 1 */

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <netinet/if_ether.h> header file.  */
#define HAVE_NETINET_IF_ETHER_H 1

/* Define if you have the <rc5.h> header file.  */
/* #undef HAVE_RC5_H */

/* Define if you have the <rpc/rpcent.h> header file.  */
/* #undef HAVE_RPC_RPCENT_H */

/* Define if you have the <smi.h> header file.  */
/* #undef HAVE_SMI_H */

/* Define if you have the crypto library (-lcrypto).  */
/* Handled by Makefile, to allow optional crypto */
/* #define HAVE_LIBCRYPTO 1 */

/* Define if you have the dnet library (-ldnet).  */
/* #undef HAVE_LIBDNET */

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the resolv library (-lresolv).  */
/* #undef HAVE_LIBRESOLV */

/* Define if you have the rpc library (-lrpc).  */
/* #undef HAVE_LIBRPC */

/* Define if you have the smi library (-lsmi).  */
/* #undef HAVE_LIBSMI */

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */

/* Define if you have the str library (-lstr).  */
/* #undef HAVE_LIBSTR */

/* define if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

