//"new" allocates memory on the heap,it finds a block of memory which meets our demands
//from memory list and returns a pointer to that memory address 

#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity(): m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const {return m_Name;}  
};


int main()
{
   int a = 2;               //memory allocated on the stack
   int* b = new int;        //4 bytes of memory allocated on the heap and returns the pointer b
   int* c = new int[50];    // 200 bytes of memory for an array on the heap

   Entity* e = new Entity;        //or "new Entity()" alternatively. it also call the constructor
   Entity* e_2 = new Entity[50]; //for an array of Entities

   delete b;
   delete e;
   delete[] c;                 //with using "new", this is our responsibility to also use "delete"!

   //placement new:
   Entity* e_3 = new(c) Entity();

   //memory allocation in C using malloc(), NOT recommended in C++:
   Entity* e_4 = (Entity*)malloc(sizeof(Entity));
}