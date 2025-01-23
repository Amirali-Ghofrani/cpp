#include <iostream>

class Entity
{
public:
    float X, Y;

    Entity()         //runs every time an Entity type object is created. Initializes X and Y.
    {               //doesn't return anything. must match the name of the class
        X = 0.0f;  //if we don't define any constructor, the compiler will use 
        Y = 0.0f; //a default constructor which simply does nothing.
    }

    Entity(float x, float y) //we can use as many constructors as we want
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

int main()
{
    Entity e(10.0f, 5.0f); //uses the second constructor to initialize X and Y
    e.Print();  
}

//IMPORTANT: constructors would only run when we instantiate a class type object(e).
//Entity = delete;  //with this command the default constructor is deleted.