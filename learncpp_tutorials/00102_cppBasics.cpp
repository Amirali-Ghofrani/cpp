#include <iostream>

/*
we can write
multiple line comments
using this syntax
*/

/*
we can comment and uncomment 00102_cppBasics

a selected scope by "Ctrl" + "/"
*/

int main()
{
    std::cout << "Hi there!,\nthis is the first lesson of learncpp.com tutprials";
    int a, b;         // correct but NOT recommended
    int c; double d; // correct but NOT recommended
                    // different variable types should be
                   // defined in different statements
    int width = 5; // a copy assignment, copies the number 5
                  // to the variable width
}

// USEFUL TIP!
// Using simple one-line comments for usual comments and using 
// multi-line comments for deactivating blocks of code would be more clean 