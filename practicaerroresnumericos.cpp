#include<cmath>
#include <iostream>

float fact(int a)
{
  int F = 1;
  for (int i=1; i <= a; i++)
    {
      F = F * i;
    }
  return F;
}

double mysin( double x, int N)
{
  double seno = 0;
  for (int k=0; k < N ; k++)
    {
      seno = seno + pow(-1,k) * pow(x, 2 * k + 1)/ fact(2 * k + 1);
    }
  
 return seno;
}
 
int main ()
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(9);
  const double x = M_PI/3;
  const double exact = std::sin(x);
  for(int N = 1 ; N <= 100; N++) {
    double diff = std::fabs(mysin(x, N) - exact)/exact;
    std::cout << N << "\t" << diff << "\n";

  }

  return 0;
}
