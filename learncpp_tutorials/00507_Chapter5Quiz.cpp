#include <iostream>
#include <string>

std::string getName()
{
    std::cout << "Please Enter Your Full Name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int nameLength(const std::string name)
{
    int len{};
    len = static_cast<int>(name.length());
    return len;
}

int getAge()
{
    std::cout << "Please Enter Your Age: ";
    int age{};
    std::cin >> age;

    return age;
}


int main ()
{
    std::string name {getName()};
    int length {nameLength(name)};

    int age{getAge()};

    std::cout << "your age + length of your name is: " << length + age; 

}