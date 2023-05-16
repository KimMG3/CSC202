#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  //seed the random number generator
  std: srand(std::time(nullptr));
  
  //generates and print 10 random numbers
  for (int i = 0; i < 10; i++) {
    int randomNumber = std::rand() % 10 + 1;
    std::cout << randomNumber << " ";
  }

  std::cout << std::endl;

  return 0;
}
