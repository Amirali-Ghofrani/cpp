// a method to initialize our class members in the constructor
#include <iostream>
#include <string>

#include <string>
#include <iostream>

class Entity
{
private:
    std::string m_Name;
    int m_Score;

public:
    // Default constructor
    Entity() 
        : m_Name("Unknown"), m_Score(0) //the members should better be initialized in the 
    {                                  //same order that they were defined

    }

    // Constructor with one argument
    Entity(const std::string& name) 
        : m_Name(name), m_Score(0) 
    {

    }

    // Constructor with two arguments
    Entity(const std::string& name, int score) 
        : m_Name(name), m_Score(score) 
    {

    }

    void Print() const
    {
        std::cout << "Name: " << m_Name << ", Score: " << m_Score << '\n';
    }
};

int main()
{
    Entity e1;                       // Calls default constructor
    Entity e2("Alice");              // Calls constructor with one argument
    Entity e3("Bob", 42);            // Calls constructor with two arguments

    e1.Print();
    e2.Print();
    e3.Print();

    return 0;
}
