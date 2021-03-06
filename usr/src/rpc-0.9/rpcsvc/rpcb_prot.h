/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RPCB_PROT_H_RPCGEN
#define _RPCB_PROT_H_RPCGEN

#include <rpc/rpc.h>

/*
 * Sun RPC is a product of Sun Microsystems, Inc. and is provided for
 * unrestricted use provided that this legend is included on all tape
 * media and as a part of the software program in whole or part.  Users
 * may copy or modify Sun RPC without charge, but are not authorized
 * to license or distribute it to anyone else except as part of a product or
 * program developed by the user or with the express written consent of
 * Sun Microsystems, Inc.
 *
 * SUN RPC IS PROVIDED AS IS WITH NO WARRANTIES OF ANY KIND INCLUDING THE
 * WARRANTIES OF DESIGN, MERCHANTIBILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE, OR ARISING FROM A COURSE OF DEALING, USAGE OR TRADE PRACTICE.
 *
 * Sun RPC is provided with no support and without any obligation on the
 * part of Sun Microsystems, Inc. to assist in its use, correction,
 * modification or enhancement.
 *
 * SUN MICROSYSTEMS, INC. SHALL HAVE NO LIABILITY WITH RESPECT TO THE
 * INFRINGEMENT OF COPYRIGHTS, TRADE SECRETS OR ANY PATENTS BY SUN RPC
 * OR ANY PART THEREOF.
 *
 * In no event will Sun Microsystems, Inc. be liable for any lost revenue
 * or profits or other special, indirect and consequential damages, even if
 * Sun has been advised of the possibility of such damages.
 *
 * Sun Microsystems, Inc.
 * 2550 Garcia Avenue
 * Mountain View, California  94043
 */
/*
 * Copyright (c) 1985, 1990 by Sun Microsystems, Inc.
 */

/* from @(#)rpcb_prot.x	1.3 91/03/11 TIRPC 1.0 */

#ifndef _rpcsvc_rpcb_prot_h
#define _rpcsvc_rpcb_prot_h


struct rpcb {
	u_long r_prog;
	u_long r_vers;
	char *r_netid;
	char *r_addr;
};
typedef struct rpcb rpcb;
#ifdef __cplusplus 
extern "C" bool_t xdr_rpcb(XDR *, rpcb*);
#elif __STDC__ 
extern  bool_t xdr_rpcb(XDR *, rpcb*);
#else /* Old Style C */ 
bool_t xdr_rpcb();
#endif /* Old Style C */ 


struct rpcblist {
	rpcb rpcb_map;
	struct rpcblist *rpcb_next;
};
typedef struct rpcblist rpcblist;
#ifdef __cplusplus 
extern "C" bool_t xdr_rpcblist(XDR *, rpcblist*);
#elif __STDC__ 
extern  bool_t xdr_rpcblist(XDR *, rpcblist*);
#else /* Old Style C */ 
bool_t xdr_rpcblist();
#endif /* Old Style C */ 


struct rpcb_rmtcallargs {
	u_long prog;
	u_long vers;
	u_long proc;
	struct {
		u_int args_ptr_len;
		char *args_ptr_val;
	} args_ptr;
};
typedef struct rpcb_rmtcallargs rpcb_rmtcallargs;
#ifdef __cplusplus 
extern "C" bool_t xdr_rpcb_rmtcallargs(XDR *, rpcb_rmtcallargs*);
#elif __STDC__ 
extern  bool_t xdr_rpcb_rmtcallargs(XDR *, rpcb_rmtcallargs*);
#else /* Old Style C */ 
bool_t xdr_rpcb_rmtcallargs();
#endif /* Old Style C */ 


struct rpcb_rmtcallres {
	char *addr_ptr;
	struct {
		u_int results_ptr_len;
		char *results_ptr_val;
	} results_ptr;
};
typedef struct rpcb_rmtcallres rpcb_rmtcallres;
#ifdef __cplusplus 
extern "C" bool_t xdr_rpcb_rmtcallres(XDR *, rpcb_rmtcallres*);
#elif __STDC__ 
extern  bool_t xdr_rpcb_rmtcallres(XDR *, rpcb_rmtcallres*);
#else /* Old Style C */ 
bool_t xdr_rpcb_rmtcallres();
#endif /* Old Style C */ 


#endif /* ! _rpcsvc_rpcb_prot_h */

#define RPCBPROG ((u_long)100000)
#define RPCBVERS ((u_long)3)

#ifdef __cplusplus
#define RPCBPROC_SET ((u_long)1)
extern "C" bool_t * rpcbproc_set_3(rpcb *, CLIENT *);
extern "C" bool_t * rpcbproc_set_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_UNSET ((u_long)2)
extern "C" bool_t * rpcbproc_unset_3(rpcb *, CLIENT *);
extern "C" bool_t * rpcbproc_unset_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_GETADDR ((u_long)3)
extern "C" char ** rpcbproc_getaddr_3(rpcb *, CLIENT *);
extern "C" char ** rpcbproc_getaddr_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_DUMP ((u_long)4)
extern "C" rpcblist * rpcbproc_dump_3(void *, CLIENT *);
extern "C" rpcblist * rpcbproc_dump_3_svc(void *, struct svc_req *);
#define RPCBPROC_CALLIT ((u_long)5)
extern "C" rpcb_rmtcallres * rpcbproc_callit_3(rpcb_rmtcallargs *, CLIENT *);
extern "C" rpcb_rmtcallres * rpcbproc_callit_3_svc(rpcb_rmtcallargs *, struct svc_req *);
#define RPCBPROC_GETTIME ((u_long)6)
extern "C" u_int * rpcbproc_gettime_3(void *, CLIENT *);
extern "C" u_int * rpcbproc_gettime_3_svc(void *, struct svc_req *);
#define RPCBPROC_UADDR2TADDR ((u_long)7)
extern "C" struct netbuf * rpcbproc_uaddr2taddr_3(char **, CLIENT *);
extern "C" struct netbuf * rpcbproc_uaddr2taddr_3_svc(char **, struct svc_req *);
#define RPCBPROC_TADDR2UADDR ((u_long)8)
extern "C" char ** rpcbproc_taddr2uaddr_3(struct netbuf *, CLIENT *);
extern "C" char ** rpcbproc_taddr2uaddr_3_svc(struct netbuf *, struct svc_req *);

#elif __STDC__
#define RPCBPROC_SET ((u_long)1)
extern  bool_t * rpcbproc_set_3(rpcb *, CLIENT *);
extern  bool_t * rpcbproc_set_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_UNSET ((u_long)2)
extern  bool_t * rpcbproc_unset_3(rpcb *, CLIENT *);
extern  bool_t * rpcbproc_unset_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_GETADDR ((u_long)3)
extern  char ** rpcbproc_getaddr_3(rpcb *, CLIENT *);
extern  char ** rpcbproc_getaddr_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_DUMP ((u_long)4)
extern  rpcblist * rpcbproc_dump_3(void *, CLIENT *);
extern  rpcblist * rpcbproc_dump_3_svc(void *, struct svc_req *);
#define RPCBPROC_CALLIT ((u_long)5)
extern  rpcb_rmtcallres * rpcbproc_callit_3(rpcb_rmtcallargs *, CLIENT *);
extern  rpcb_rmtcallres * rpcbproc_callit_3_svc(rpcb_rmtcallargs *, struct svc_req *);
#define RPCBPROC_GETTIME ((u_long)6)
extern  u_int * rpcbproc_gettime_3(void *, CLIENT *);
extern  u_int * rpcbproc_gettime_3_svc(void *, struct svc_req *);
#define RPCBPROC_UADDR2TADDR ((u_long)7)
extern  struct netbuf * rpcbproc_uaddr2taddr_3(char **, CLIENT *);
extern  struct netbuf * rpcbproc_uaddr2taddr_3_svc(char **, struct svc_req *);
#define RPCBPROC_TADDR2UADDR ((u_long)8)
extern  char ** rpcbproc_taddr2uaddr_3(struct netbuf *, CLIENT *);
extern  char ** rpcbproc_taddr2uaddr_3_svc(struct netbuf *, struct svc_req *);

#else /* Old Style C */ 
#define RPCBPROC_SET ((u_long)1)
extern  bool_t * rpcbproc_set_3();
extern  bool_t * rpcbproc_set_3_svc();
#define RPCBPROC_UNSET ((u_long)2)
extern  bool_t * rpcbproc_unset_3();
extern  bool_t * rpcbproc_unset_3_svc();
#define RPCBPROC_GETADDR ((u_long)3)
extern  char ** rpcbproc_getaddr_3();
extern  char ** rpcbproc_getaddr_3_svc();
#define RPCBPROC_DUMP ((u_long)4)
extern  rpcblist * rpcbproc_dump_3();
extern  rpcblist * rpcbproc_dump_3_svc();
#define RPCBPROC_CALLIT ((u_long)5)
extern  rpcb_rmtcallres * rpcbproc_callit_3();
extern  rpcb_rmtcallres * rpcbproc_callit_3_svc();
#define RPCBPROC_GETTIME ((u_long)6)
extern  u_int * rpcbproc_gettime_3();
extern  u_int * rpcbproc_gettime_3_svc();
#define RPCBPROC_UADDR2TADDR ((u_long)7)
extern  struct netbuf * rpcbproc_uaddr2taddr_3();
extern  struct netbuf * rpcbproc_uaddr2taddr_3_svc();
#define RPCBPROC_TADDR2UADDR ((u_long)8)
extern  char ** rpcbproc_taddr2uaddr_3();
extern  char ** rpcbproc_taddr2uaddr_3_svc();
#endif /* Old Style C */ 

#endif /* !_RPCB_PROT_H_RPCGEN */
