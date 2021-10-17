#include<cmath>
#include <iostream>

double mysin(double x, int N);

int main ()
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(5);
  const double x= M_PI/3;
  const double exact = std::sin(x);
  
  for(int NMAX = 1 ; NMAX <= 1000; NMAX++) {
    double diff = std::fabs(mysin(x, NMAX)- exact)/exact;
    std::cout << mysin(x,NMAX) <<"\n";

  }

  return 0;
}

