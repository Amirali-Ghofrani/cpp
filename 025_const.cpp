#include <iostream>
#include <string>

int main()
{
    const int MAX_AGE = 90; //some kind of declaration that we dont want our 
                        //variable to varry and want it to be constant
//const in pointers:
    const int* a = new int; //exactly the same as "int const*" but NOT the same as int* const!

    //*a = 2; //the value of a(the contents of where a points to) cannot be changed
    a = (int*)&MAX_AGE; //but we can chane the location that a points to
    std::cout << *a << std::endl; //dereferencing and just reading a is also fine

    int* const b = new int;
    *b = 2;                 //this time, we can alter the value for b
    //b = (int*)&MAX_AGE; //ERRORS: but we cannot change what b points to!
    std::cout << *b << std::endl;

    const int* const c = new int;
    //when we write const twice, we neither can change the value nor what it points to

}