// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// gridptsRcpp
List gridptsRcpp(int r, double mu, double a, double b);
RcppExport SEXP _gsdmvn_gridptsRcpp(SEXP rSEXP, SEXP muSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gridptsRcpp(r, mu, a, b));
    return rcpp_result_gen;
END_RCPP
}
// h1Rcpp
List h1Rcpp(int r, double theta, double I, double a, double b);
RcppExport SEXP _gsdmvn_h1Rcpp(SEXP rSEXP, SEXP thetaSEXP, SEXP ISEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type I(ISEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(h1Rcpp(r, theta, I, a, b));
    return rcpp_result_gen;
END_RCPP
}
// hupdateRcpp
List hupdateRcpp(int r, double theta, double I, double a, double b, double thetam1, double Im1, List gm1);
RcppExport SEXP _gsdmvn_hupdateRcpp(SEXP rSEXP, SEXP thetaSEXP, SEXP ISEXP, SEXP aSEXP, SEXP bSEXP, SEXP thetam1SEXP, SEXP Im1SEXP, SEXP gm1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type I(ISEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type thetam1(thetam1SEXP);
    Rcpp::traits::input_parameter< double >::type Im1(Im1SEXP);
    Rcpp::traits::input_parameter< List >::type gm1(gm1SEXP);
    rcpp_result_gen = Rcpp::wrap(hupdateRcpp(r, theta, I, a, b, thetam1, Im1, gm1));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gsdmvn_gridptsRcpp", (DL_FUNC) &_gsdmvn_gridptsRcpp, 4},
    {"_gsdmvn_h1Rcpp", (DL_FUNC) &_gsdmvn_h1Rcpp, 5},
    {"_gsdmvn_hupdateRcpp", (DL_FUNC) &_gsdmvn_hupdateRcpp, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_gsdmvn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
