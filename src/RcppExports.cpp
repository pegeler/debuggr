// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hello
void hello();
RcppExport SEXP _debuggr_hello() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    hello();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_debuggr_hello", (DL_FUNC) &_debuggr_hello, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_debuggr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
