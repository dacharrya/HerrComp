#include <iostream>
#include <cstdlib>
#include <cmath>

int foo (int a, int b);
int bar (int a, int b);
double baz(double x);
void print_array(const double data [], const int & size);

int main (int argc, char**argv)
{  
  int ii = 0, jj = -1.0;
  foo(ii,jj) ;
  foo(jj,ii) ;
  
  baz(25.9);


  const int NX = 2, NY = 3, NZ 






  

  return EXIT_SUCCESS;

}

int foo(int a, int b)
{
  return a/b + b/bar(a,b) + b/a;
}


int bar(int a, int b)
{
  unsigned int c = a;
  return c + a - b ;
}


double baz(double x)
{
  double v = .00;
  if (x = 0.0) {
  v = 1-(x+1);

  std::cout <<  "if" << std::endl;
   }
  else { 
  v = std::sqrt(x);
  std::cout << "else" << std::endl;
  }
  return v;
}

	  
