#include <Rcpp.h>
using namespace Rcpp;

//' Grid points for group sequential design numerical integration in C++
//' 
//' @param r Integer, at least 2; default of 18 recommended by Jennison and Turnbull
//' @param mu Mean of normal distribution (scalar) under consideration
//' @param a lower limit of integration (scalar)
//' @param b upper limit of integration (scalar \code{> a})
//' @return A \code{list} with grid points in \code{z} and numerical integration weights in \code{w}
//' @export
// [[Rcpp::export]]

List gridptsRcpp(int r, double mu, double a, double b)
{

  // Define odd numbered grid points for real line
  NumericVector x(6*r-1);
  for (int i = 0; i < r-1; i++) {
    double tmp = 3 + 4 * log(r/(double)(i+1));
    x[i] = mu - tmp;
    x[6*r-2-i] = mu + tmp;
  }
  for (int i = r-1; i <= 5*r-1; i++) {
    x[i] =  mu - 3 + 3 * (i - (r-1)) / (double)(2*r);
  }

  // Trim points outside of [a, b] and include those points
  if (min(x) < a) {
    x = x[x > a];
    x.insert(x.begin(), a);
  }
  if (max(x) > b) {
    x = x[x < b];
    x.push_back(b);
  }

  // If extreme, include only 1 point where density will be essentially 0
  int m = x.size();
  if (m == 1) return List::create(Named("z") = x, Named("w") = 1);

  // Initialize output vectors
  NumericVector z(2*m-1);
  NumericVector w(2*m-1);
  
  for (int i = 0; i <= 2*m-4; i+=2) {
    // Compute odd numbered grid points between the odd ones
    z[i] = x[i/2];
    // Compute even numbered grid points with their corresponding weights
    z[i+1] = (x[i/2] + x[i/2+1]) / (double)2;
    w[i+1] = 4 * (x[i/2+1] - x[i/2]);
  }
  z[2*m-2] = x[m-1]; // last odd numbered point

  // Compute weights for odd numbered grid points
  w[0] = x[1] - x[0]; // first point
  for (int i = 2; i <= 2*m-4; i+=2) {
    w[i] = x[i/2+1] - x[i/2-1];
  }
  w[2*m-2] = x[m-1] - x[m-2]; // last point
  w = w / (double)6;

  return List::create(Named("z") = z,
                      Named("w") = w);
}
