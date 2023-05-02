#include <iostream>
#include <string> 

void printReverse (const std::string & str) {
  for (int i = str.size() -1; i >= 0; i--) {
    std::cout <<str[i];
  }
  std::cout << std::endl;
}

int main() {
  std::string string = "hello world";
  printReverse(string);
  return 0;
}
