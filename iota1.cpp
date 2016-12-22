/*
C++11 extension for the range-based for loop:

for (int& i:numbers) ...

clang++ -std=c++14 -Wall iota1.cpp
*/

// iota example
#include <iostream>     // std::cout
#include <numeric>      // std::iota

int main () {
  int numbers[10];

  std::iota (numbers,numbers+10,100);

  std::cout << "numbers:";
  for (int& i:numbers) std::cout << ' ' << i;
  std::cout << '\n';

  return 0;
}
