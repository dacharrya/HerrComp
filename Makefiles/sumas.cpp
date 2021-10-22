#include <iostream>




typedef float REAL;
REAL SUMUP(int N);
REAL SUMDOWN(int N);

int main (void)
{
  std::cout.precision(6);
  std::cout.setf(std::ios::scientific);

  
  std::cout << "\n" << SUMUP (2)<< "\n"  << std::endl;
  std::cout << "\n" << SUMDOWN (2)  << "\n" << std::endl;


  return 0;
  
}


REAL SUMUP(int N)
{

  REAL suma = 0;
  for (int ii = 1; ii <= N; ++ii){
    suma += 1.0/ii;
      }
  return suma;
}


REAL SUMDOWN(int N)
{

  REAL suma = 0;
  for (int ii = N; ii >= 1; --ii){
    suma += 1.0/ii;
      }
  return suma;
}
