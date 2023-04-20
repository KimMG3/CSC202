#include <iostream>
#include <math.h>
using namespace std;

// Declare function prototype for new_line() before main()
void new_line(); 

int main()
{
    cout << "First Line." << endl;
  // Call new_line() function
    new_line();
    cout << "Second Line." << endl;
    return 0;
} 

// Define new_line() function after main()
void new_line()
{
    // Print a new line character 
    cout << endl;
}
