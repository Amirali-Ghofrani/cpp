#include <iostream>

enum Example : char  //the type is an integer by default, we can also set it to char  
{                    //or unsigned char(8-bit integer) for less memory occupation
                    //but not float because floats are not integers
    A , B, C        // if we don't assign them a value, the default value for the 
};                  //first one(A) would be 0 by default, and increments by 1 for the nexst variables.


int main()
{
    Example value = B;
    
    if(B == 0 )
        return 0;
}

//Example in the next file(enumsExample)