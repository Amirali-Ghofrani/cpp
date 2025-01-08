#include <iostream>
#include <string>
//Inside every member function, the keyword this is a const pointer that holds the address of the current implicit object.
class Entity
{
public:
    int x, y;
    int a, b;
    Entity(int x, int y)
        : x(x), y(y)  //this will work totally fine
    {
        //x = x;    //this will cause errors
    }

    Entity(float a, float b)
    {
        this->x = x; //also (*this).x = x;
        this->y = y;
    }
};

int main()
{

}