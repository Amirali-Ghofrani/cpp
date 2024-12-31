#include <iostream>
#include "4.2_library.h" // includes declaration for the second test function: test2()
                        // <> are used for include directories and "" are used when the
                        // library in in the current directory
// we can also use "" instead of <>, but not vice versa!

int test();              // Declaring the function defined in 4.1_test file

int main()
{
   test();    // calling the declared function
   std::cout<<"Congrats! Your function is working!"<<std::endl;
   test2();   // calling the secong test function
   return 0;
}