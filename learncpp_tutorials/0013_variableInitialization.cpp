#include <iostream>

int main()
{
    int a;          // Default initialization

    int b = 5;     // Copy-initialization 
    int c ( 6 );   // Direct-initialization 

// Modern initialization forms (preferred):

    int d { 7 };   // Direct-list-initialization 
    int e {};      // Value-initialization (empty braces)
}

// More information about different types of initializers are
// available on "https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/" 