#include <Rcpp.h>
using namespace Rcpp;

//' @export
// [[Rcpp::export]]
void hello()
{
  Rcout << "hello" << std::endl;
}
