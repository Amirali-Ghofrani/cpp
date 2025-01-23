#include <iostream>

class Entity
{
private:

int X, Y;
void Print() {}

protected:

int Z;

public:

    Entity()
    {
        X = 0;    //we can easily access X and Print() from inside the class
        Print();  //but we can not access these two from neither the main function
                 //nor aother class
        
        Z = 0;   // accessible from inside the class and superclasses, 
    }           //but not the main function


};


class Player : public Entity
{
    //X = 0;   // this will cause error because X in not accessible from
               //another class
public:
    void Print_2 ()
    {
        Z = 5;
        std::cout << Z;  // Z is accessible from a superclass 
    }                   //but not the main function
};


int main()
{
    Entity e;
    //e.X = 0   //causes error
    //e.Print();
    
    //e.Z = 8;  //error!

    Player f;      //only public parts are available here
    f.Print_2();    

}