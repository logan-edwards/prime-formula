#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
GOALS (in order):

1. Function which uses pure math
2. Time function for pure math function
3. Option to pick between the two formulas
4. Data visualization of time for inefficiencies... NOT bounded by a polynomial
  4a. Output time data to formatted temp file
  4b. Plot time data
5. "stress test" comparison between typical function loops and the math formula

*/

/* Currently breaks at 7th prime

Ideally I would like to reach the 100th prime, but this is likely unreachable.

*/

#ifndef M_PI
#  define M_PI 4*atan(1)
#endif

double n_bound = 7;
//const double pi = 4*atan(1); /* "old-school" way of computing pi so that it works on all compilers... who knew M_PI from math.h wasn't standard? */

int factorial(double n) {
  /* Hopefully input will be sanitized by this point... otherwise, error checking is needed here, as we could have negative inputs! */
  if(n > 1) {
    return(n*factorial(n-1)); // recursion may be slower than iteration at large numbers... a better implementation is probably needed
  }
  else return n; // seems to work as intended, however! at least, for small n
}

double return_cosine(double i) {
double denominator_value = 0;
double j;
for(j=1; j<=i; j++) {
  denominator_value += floor(pow(cos(M_PI*((factorial(j-1)+1)/j)),2));
}

return denominator_value;

/* This function simply counts primes by returning 1 for every prime integer and 0 for every non-prime integer*/
//  return floor(pow(cos(pi*((factorial(j-1)+1)/j)),2)); // cos^2 is always pos, and ((j-1)+1)/j always produces an integer... multiplying by pi, each integer is max so floor=1
}


double prime_result(double n) {
  double prime_value = 1;
  double i;
  for(i=1; i<=pow(2,n); i++) {
    prime_value += floor(pow((n/return_cosine(i)),(1/n)));
  }
  return(prime_value);
}

void main() {
  double c = prime_result(n_bound);
  printf("%f",c);
}
