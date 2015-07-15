// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dbscan_int
IntegerVector dbscan_int(NumericMatrix data, double eps, int minPts, int bucketSize, int splitRule, double approx);
RcppExport SEXP dbscan_dbscan_int(SEXP dataSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP bucketSizeSEXP, SEXP splitRuleSEXP, SEXP approxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type splitRule(splitRuleSEXP);
    Rcpp::traits::input_parameter< double >::type approx(approxSEXP);
    __result = Rcpp::wrap(dbscan_int(data, eps, minPts, bucketSize, splitRule, approx));
    return __result;
END_RCPP
}