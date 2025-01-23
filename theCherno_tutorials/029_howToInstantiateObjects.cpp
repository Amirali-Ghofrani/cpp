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
     Entity entity = Entity("Cherno");               //just the same as "Entity entity("Cherno");"
     std::cout << entity.GetName() << std::endl;    //creating an object on the stack, we should better do it
                                                  //whenever we could.
    
    
    
    Entity* entity_2 = new Entity("Cherno");       //allocated entity_2 on the heap and returns an Entity pointer
    std::cout << (*entity_2).GetName() << std::endl; //we can use entity_2->GetName() (Arrow) instead
    
    //ultimately we are responsible for deleting entity_2 manually and making the memory free
    delete entity_2;

}