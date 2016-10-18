#include <iostream>

// Doesn't know which to use, so won't compile

// int cout() // own function
// {
//   return 5;
// }

int main() {
  int x = 5;
  std::cout << "x is equal to: " << x << std::endl; // This says to do a new line

  std::cin >> x;
  std::cout << "You entered: " << x << std::endl;

  using namespace std; // Using declaration so we can just say cout or endl
  // using std::cout
  cout << "Hello World!" << endl;
  return 0;
}
