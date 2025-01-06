#include <iostream>
#include <string>

class Entity
{
 private:
    int m_X, m_Y;
    int* m_Z, m_A, *m_B; //m_Z and m_B are pointers but m_A is just an integer!
    mutable int var;

public:
    int GetX() const  //this example works only for classes and it means we cannot modify
    {                //the contents of this class and our method is read-only
        //m_X = 2; //causes ERRORs!
        var = 2;   // we can change mutable objects even in const functions
        return m_X;
    }

    const int* const GetX_2() //if z was a pointer and needed to be const
        {                   // this means the function returns a pointer which cannot
            return m_Z;    //be modified, the value of the pointer cannot be modified either
        }                 //and the function in a red-only func and wont modify the actual Entity class 

};

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