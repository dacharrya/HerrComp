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

  int N = 10;
  std::cout.precision(6);
  std::cout.setf(std::ios::scientific);
  
  //  std::cout << "Número de términos a usar : ";
  //std::cin >> N;

 
  for (int ii = 1.0; ii <= N  ; ++ii)
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
    for (int k = 1.0; k <= 2.0 * N ; k++)
    {
  sum1 += pow( - 1.0 , k) * frac (k , k + 1.0) ;
    }
 return sum1;
}

REAL sumtwo(int N)
{
  double sum2 = 0 ;
    for (int k=1.0; k <= N ; k++)
    {
  sum2 += frac(2.0 * k,2.0*k +1.0) - frac(2.0*k-1.0,2.0*k) ;
    }
  return sum2;
}


REAL sumthree(int N)
{
  double sum3;
  for (int k=1.0; k <= N ; k++)
    {
  sum3 = frac (1.0 , multi( 2.0 * k , 2.0 * k +1.0 ));
    }
 return sum3;
}

