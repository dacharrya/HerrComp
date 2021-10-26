#include <iostream>
#include<cmath>


typedef float REAL;
REAL sumone(int N);
REAL sumtwo(int N);
REAL sumthree(int N);

double multi(double jk, double jl)
{
  double M;
  M = jk * jl;

  return M;
}

double frac (double jj, double ji)
{
  double F;
  F = jj / ji;

  return F;
}

int main (void)
{

  int N;
  std::cout.precision(6);
  std::cout.setf(std::ios::scientific);
  
  std::cout << "Número de términos a usar : ";
  std::cin >> N;
  for (int ii = 1.0; ii < N  ; ++ii)
    {
    REAL suma1 = sumone(ii);
    REAL suma2 = sumtwo(ii);
    REAL suma3 = sumthree(ii);
    
    std::cout << ii <<"\t"<< suma1 <<"\t"<< suma2 <<"\t"<< suma3 << "\t" << std::fabs(1.0 - suma1/suma3) << "\t" << std::fabs(1.0 - suma2/suma3) <<std::endl;
    
    }    
  return 0;
    
}

REAL sumone(int N)
{
  double sum1 = 0;
    for (int k = 1.0; k < multi( 2 , N ) ; k++)
    {

 
  sum1 = sum1 +  pow(- 1.0 , N) * frac (N , N + 1.0) ;
     
    }    
  
 return sum1;
}

REAL sumtwo(int N)
{
  double sum2 = 0 ;
  for (int k=1.0; k < N ; k++)
    {
      sum2 = sum2 + frac(N+N,N+N+1.0) - frac(N+N-1.0,N+N) ;
    }

 return sum2;
}


REAL sumthree(int N)
{
  double sum3;
  for (int k=1.0; k < N ; k++)
    {
      sum3 = sum3 + frac (1.0 , multi( 2 * N , N + N +1.0));
    }

 return sum3;
}

