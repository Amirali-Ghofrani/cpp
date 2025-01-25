#include <iostream>
#include <unistd.h>

int main()
{
    int a;          // Default initialization

    int b = 5;     // Copy-initialization 
    int c ( 6 );   // Direct-initialization 

// Modern initialization forms (preferred):

    int d { 7 };   // Direct-list-initialization 
    int e {};      // Value-initialization (empty braces)
    int f = { 8 }; // Copy-list-initialization (rarely used)

    // It is very important that each variable must have a 
    // distinct exclusive initializer, although multiple 
    // initialization in a single statement is not generally
    // recommended:

    int h = 5, i = 6;          
    int j ( 7 ), k ( 8 );      
    int l { 9 }, m { 10 };     
    int n {}, o {};            

// ***NOTE***
// Direct list initialization disallows narrowing conversion while
// Other methods don't!

//  int w1 { 4.9 }; // compile error: list-init does not allow narrowing conversion
    int w2 = 4.9;   // compiles: w2 copy-initialized to value 4
    int w3 (4.8);   // compiles: w3 direct-initialized to value 4

    std::cout << "w2 = " << w2 << std::endl << "w3 = " << w3 << std::endl;

// "mabe_unused feature" in cpp 17 prevents the unused variable warning :
    [[maybe_unused]] int p { 11 };
}

// More information about different types of initializers are
// available on "https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/" 