#include <iostream>
void corrected();  //defined after the main function 

struct Entity // in contrast to classes, structs are public by default
{
    static int x,y; //with making them static, there would be only one instance
    void Print()    //in every single object with Entity class type
    {
        std::cout << x << "," << y << std::endl;
    }
};

int Entity::x;
int Entity::y; //we have to define them outside of the struct(or class) 
               //to make them visible





int main()
{               
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1;
    e1.x = 5;
    e1.y = 8;

    e.Print();
    e1.Print(); // both print functions print "5,8", because when x,y is changed once,
                // it would be changed in all Entity type objects. in fact, e.x(or y) and
                // e1.x(or y) are pointing to the same address of memory.
                // x,y are not members of a class, they are members of a namespace.
    corrected();
}

// so, it makes more sense to rewrite our code like below:


void corrected()
{               
    Entity e;
    Entity::x = 2;
    Entity::y = 3;
    
    Entity e1;
    Entity::x = 5;
    Entity::y = 8;    

    e.Print();
    e1.Print();

}