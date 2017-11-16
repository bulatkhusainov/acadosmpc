/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) vde_adj_chain_nm3_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#ifndef real_t
#define real_t double
#endif /* real_t */

#define to_double(x) (double) x
#define to_int(x) (int) x
#define CASADI_CAST(x,y) (x) y
/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
real_t CASADI_PREFIX(fmin)(real_t x, real_t y) { return x<y ? x : y;}
#define fmin(x,y) CASADI_PREFIX(fmin)(x,y)
real_t CASADI_PREFIX(fmax)(real_t x, real_t y) { return x>y ? x : y;}
#define fmax(x,y) CASADI_PREFIX(fmax)(x,y)
#endif

#define PRINTF printf
#ifndef CASADI_SYMBOL_EXPORT
#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#if defined(STATIC_LINKED)
#define CASADI_SYMBOL_EXPORT
#else /* defined(STATIC_LINKED) */
#define CASADI_SYMBOL_EXPORT __declspec(dllexport)
#endif /* defined(STATIC_LINKED) */
#elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
#else /* defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__) */
#define CASADI_SYMBOL_EXPORT
#endif /* defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__) */
#endif /* CASADI_SYMBOL_EXPORT */
real_t CASADI_PREFIX(sq)(real_t x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

real_t CASADI_PREFIX(sign)(real_t x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[7] = {3, 1, 0, 3, 0, 1, 2};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[19] = {15, 1, 0, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
#define s2 CASADI_PREFIX(s2)
/* vde_adj_chain_nm3 */
CASADI_SYMBOL_EXPORT int vde_adj_chain_nm3(const real_t** arg, real_t** res, int* iw, real_t* w, int mem) {
  real_t a0=arg[0] ? arg[0][0] : 0;
  real_t a1=sq(a0);
  real_t a2=arg[0] ? arg[0][1] : 0;
  real_t a3=sq(a2);
  a1=(a1+a3);
  a3=arg[0] ? arg[0][2] : 0;
  real_t a4=sq(a3);
  a1=(a1+a4);
  a1=sqrt(a1);
  a4=3.3000000000000002e-02;
  real_t a5=(a4/a1);
  real_t a6=1.;
  real_t a7=(a6-a5);
  real_t a8=3.3333333333333336e+01;
  real_t a9=arg[1] ? arg[1][3] : 0;
  a9=(a8*a9);
  real_t a10=(a7*a9);
  real_t a11=(a0+a0);
  a5=(a5/a1);
  real_t a12=arg[1] ? arg[1][5] : 0;
  a12=(a8*a12);
  real_t a13=(a3*a12);
  real_t a14=arg[1] ? arg[1][4] : 0;
  a8=(a8*a14);
  a14=(a2*a8);
  a13=(a13+a14);
  a14=(a0*a9);
  a13=(a13+a14);
  a5=(a5*a13);
  a1=(a1+a1);
  a5=(a5/a1);
  a11=(a11*a5);
  a10=(a10+a11);
  a11=arg[0] ? arg[0][6] : 0;
  a11=(a11-a0);
  a0=sq(a11);
  a1=arg[0] ? arg[0][7] : 0;
  a1=(a1-a2);
  a13=sq(a1);
  a0=(a0+a13);
  a13=arg[0] ? arg[0][8] : 0;
  a13=(a13-a3);
  a14=sq(a13);
  a0=(a0+a14);
  a0=sqrt(a0);
  a4=(a4/a0);
  a6=(a6-a4);
  a14=(a6*a9);
  real_t a15=(a11+a11);
  a4=(a4/a0);
  real_t a16=(a13*a12);
  real_t a17=(a1*a8);
  a16=(a16+a17);
  a11=(a11*a9);
  a16=(a16+a11);
  a4=(a4*a16);
  a0=(a0+a0);
  a4=(a4/a0);
  a15=(a15*a4);
  a14=(a14+a15);
  a10=(a10+a14);
  a10=(-a10);
  if (res[0]!=0) res[0][0]=a10;
  a10=(a7*a8);
  a2=(a2+a2);
  a2=(a2*a5);
  a10=(a10+a2);
  a8=(a6*a8);
  a1=(a1+a1);
  a1=(a1*a4);
  a8=(a8+a1);
  a10=(a10+a8);
  a10=(-a10);
  if (res[0]!=0) res[0][1]=a10;
  a7=(a7*a12);
  a3=(a3+a3);
  a3=(a3*a5);
  a7=(a7+a3);
  a6=(a6*a12);
  a13=(a13+a13);
  a13=(a13*a4);
  a6=(a6+a13);
  a7=(a7+a6);
  a7=(-a7);
  if (res[0]!=0) res[0][2]=a7;
  a7=arg[1] ? arg[1][0] : 0;
  if (res[0]!=0) res[0][3]=a7;
  a7=arg[1] ? arg[1][1] : 0;
  if (res[0]!=0) res[0][4]=a7;
  a7=arg[1] ? arg[1][2] : 0;
  if (res[0]!=0) res[0][5]=a7;
  if (res[0]!=0) res[0][6]=a14;
  if (res[0]!=0) res[0][7]=a8;
  if (res[0]!=0) res[0][8]=a6;
  a6=arg[1] ? arg[1][6] : 0;
  if (res[0]!=0) res[0][9]=a6;
  a6=arg[1] ? arg[1][7] : 0;
  if (res[0]!=0) res[0][10]=a6;
  a6=arg[1] ? arg[1][8] : 0;
  if (res[0]!=0) res[0][11]=a6;
  a6=arg[1] ? arg[1][9] : 0;
  if (res[0]!=0) res[0][12]=a6;
  a6=arg[1] ? arg[1][10] : 0;
  if (res[0]!=0) res[0][13]=a6;
  a6=arg[1] ? arg[1][11] : 0;
  if (res[0]!=0) res[0][14]=a6;
  return 0;
}

CASADI_SYMBOL_EXPORT void vde_adj_chain_nm3_incref(void) {
}

CASADI_SYMBOL_EXPORT void vde_adj_chain_nm3_decref(void) {
}

CASADI_SYMBOL_EXPORT int vde_adj_chain_nm3_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT int vde_adj_chain_nm3_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* vde_adj_chain_nm3_name_in(int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* vde_adj_chain_nm3_name_out(int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const int* vde_adj_chain_nm3_sparsity_in(int i) {
  switch (i) {
    case 0: return s0;
    case 1: return s0;
    case 2: return s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const int* vde_adj_chain_nm3_sparsity_out(int i) {
  switch (i) {
    case 0: return s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int vde_adj_chain_nm3_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 18;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif