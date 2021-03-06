// File given by a lecturer, nothing can be changed here

#include <iostream>

#include <string.h>
#include "PVec.h"
#include "PVec.h"


int main() {
  PVec a;
  PVec b;

  b.pushBack(new IntWrapper(54))
   .pushBack(new IntWrapper(14))
   .pushBack(new IntWrapper(-76));


  std::cout << b << std::endl;

  a << new IntWrapper(45);
  a << new FloatWrapper(23.67);
  a << new FloatWrapper(12.67);
  a << new StringWrapper("Iks");
  a << new IntWrapper(1234);

  std::cout << (const PVec&)a << std::endl;

  std::cout << "\n";
  a[2].print(std::cout);
  std::cout << "\n";
}
/* wynik
 54 14 -76
 45 23.67 12.67 Iks 1234

12.67

*/
