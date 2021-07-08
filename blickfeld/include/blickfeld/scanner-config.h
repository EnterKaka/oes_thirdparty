#ifndef BLICKFELD_SCANNER_CONFIG_H
#define BLICKFELD_SCANNER_CONFIG_H

#define BSL_VERSION "2.18.2-21-ad3847df"

#define SERVER_PORT 8000

#define HAVE_WINDOWS_H
/* #undef HAVE_SYS_TYPES_H */
/* #undef HAVE_SYS_SOCKET_H */
/* #undef HAVE_SYS_NETINET_IN_H */
/* #undef HAVE_SYS_NETINET_IP_H */
/* #undef HAVE_ARPA_INET_H */
/* #undef HAVE_NETDB_H */
/* #undef HAVE_UNISTD_H */
/* #undef HAVE_SYSLOG_H */
#define HAVE_TIME_H
/* #undef HAVE_GLUT_H */
#define HAVE_INTTYPES_H
#define HAVE_WINSOCK_H

/* #undef HAVE_CLOCK_GETTIME */
/* #undef HAVE_MSG_NOSIGNAL */

/* #undef BSL_STANDALONE */
/* #undef HAVE_OPENSSL */
#define BSL_RECORDING

#define DEFAULT_LOG_MSGS_KEPT_IN_MEM 50

#ifdef HAVE_WINDOWS_H
#ifndef BF_DLLEXPORT
  #define BF_DLLEXPORT __declspec(dllimport)  
#endif
#else
#ifndef BF_DLLEXPORT
  #define BF_DLLEXPORT
#endif
#endif

#ifndef BSL_STANDALONE
#if !defined(PROTOBUF_USE_DLLS)
  #define PROTOBUF_USE_DLLS
#endif
#endif

#endif // BLICKFELD_SCANNER_CONFIG_H

