#include<cmath>
#include <iostream>

float fact(int a)
{
  int F = 1;
  for (int i=1; i <= a; i++)
    {
      F = F * i;
    }
  return 0;
}

double mysin( double x, int N)
{
  double seno = 0;
  for (int k=0; k < N ; k++)
    {
      seno = seno + pow(-1,k)*pow(x, 2 * k + 1)/ fact(2 * k + 1);
    }
  std::cout <<"\n"<< seno << std::endl;
 return 0;
}

int main ()
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(5);
  const double x = M_PI/3;
  const double exact = std::sin(x);

  for(int NMAX = 1 ; NMAX <= 1000; NMAX++) {
    double diff = std::fabs(mysin(x, NMAX) - exact)/exact;
    std::cout << NMAX << "\t" << diff << "\n";

  }

  return 0;
}
