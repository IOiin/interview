#include <iostream>

#include "src/MySingleton.cpp"

int main()
{
  std::cout << "Hello\n";
  MySingleton* instance = MySingleton::get_instance();
  return 0;
}