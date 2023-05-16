#include <iostream>

void modifyValue(const int value) {
  value = 10; // Attempting to modify the const parameter
  std::cout << "Modified value: " << value << std::endl;
}

int main() {
  int num = 5;
  modifyValue(num);
  return 0;
}
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 Result: (Compile Error)

./main.cpp:4:9: error: cannot assign to variable 'value' with const-qualified type 'const int'
  value = 10; // Attempting to modify the const parameter
  ~~~~~ ^
./main.cpp:3:28: note: variable 'value' declared const here
void modifyValue(const int value) {
                 ~~~~~~~~~~^~~~~
1 error generated.
make: *** [Makefile:10: main] Error 1
exit status 2

  --> // The Compiler is indicating that you are trying to modify a 'const' parameter, which is not allowed.
