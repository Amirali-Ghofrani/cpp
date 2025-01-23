#include <iostream>

class Entity
{
public:
    float X, Y;

    Entity() 
    {       
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }


    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function()
{
    Entity e;   //Instantializing e will activate the constructor here 
    e.Print();  
}               //Destroys e here at the end of the scope, 
                //which activates the destructor

int main()
{
    Function();
}

// e.~Entity(); is also a way of activating the destructor but 
// this way is neither recommended nor used commonly 