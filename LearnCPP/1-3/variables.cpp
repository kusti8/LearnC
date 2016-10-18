#include <iostream>

int main() {
  int x; // variable definition
  x = 5; // variable assignment
  // Or int x = 5;
  std::cout << x << std::endl; // prints the value of x, which is 5

  // Evaluate into y
  int y;
  y = 4;
  y = 2+5;

  // Evaluate into x
  x = y;
  x = x;
  x = x + 1;

  int z;
  std::cout << z << std::endl; // Unexpected results
  return 0;
}
