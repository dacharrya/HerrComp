#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);
void print_array(const double data[], const int & size);

int main (int argc, char **argv)
{
  int ii = 1.0 , jj = -1.0;

  std::cout << foo(ii, jj) << "\t" << foo(jj, ii) << "\t" << baz(25.9)<< std::endl;

  const int NX = 2, NY = 3, NZ = 4;
  double x [2] = {0} , y[3] = {0}, z[4] = {0};

  
  print_array(x, NX);
  print_array(y, NY);
  print_array(z, NZ);

  std::cout << std::endl;

  for (int ii = 0; ii < NX; ++ii) {
    x[jj] = ii;
  }
  print_array(x, 4);
  print_array(y, 3);
  print_array(z, 7);
  std::cout << std::endl;
  for (jj = 0; jj < NY; ++jj) {
    x[jj] = ii;
    y[jj] = jj;
  }
  print_array(x - 3, 3);
  print_array(y-4, 4);
  print_array(z + 7, 2);
  std::cout << std::endl;


  return EXIT_SUCCESS;
}

int foo(int a, int b)
{
  return a/b + b/bar(a, b) + b/a;
}

int bar(int a, int b)
{
  unsigned int c = a;
  return c + a - b;
}

double baz(double x)
{
  if (x == 0){
  double v = 1-(x+1);
  return v;
  }
  else {
    
  return std::sqrt(x);
  
  }
}

void print_array(const double data[], const int & size)
{
  for (int ii = 0; ii < size; ++ii) {
    std::cout << data[ii] << "\n" ;
  }
  delete [] data;
}
