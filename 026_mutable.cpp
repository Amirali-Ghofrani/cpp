#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0;
public:
    const std::string& GetName() const 
    {
        m_DebugCount++; //marking m_DebugCount as mutable and making it a modifiable exception
        return m_Name;
    }

};

int main()
{
    const Entity e;
    e.GetName(); //we can only call const functions in const Entity type objects(e)

// mutable in lambdas:
    int x = 8;
    ///we have to pass x by reference in lambdas,
    /// but if we want to pass it by value we use mutable
    
    auto f = [=]() mutable
    {
        x++;
        std::cout << x << std::endl;
    };
    //and it wond modify x itself, bcz we are passing it by value(a copy) not by reference
    std::cout << x << std::endl; //x is still 8
}