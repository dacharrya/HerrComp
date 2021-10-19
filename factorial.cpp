#include<cmath>
#include <iostream>


int main ()
{
  int F = 1, a ;

  std::cout << " ¿Que factorial necesita? ";
  std::cin >> a;
  
  for (int i=1; i <= a; i++)
    {
      F = F * i;
    }

  std::cout << "El factorial es = " << F << std::endl;



  return 0;

}


