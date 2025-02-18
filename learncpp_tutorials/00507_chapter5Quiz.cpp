/*
Write a program that asks the user to enter their full name and their age. 
As output, tell the user the sum of their age and the number of characters in 
their name (use the std::string::length() member function to get the length of the string).
For simplicity, count any spaces in the name as a character.
*/

#include <iostream>
#include <string>

std::string getName()   //getting full name of the user
{
    std::cout << "Please Enter Your Full Name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int nameLength(const std::string name) //determining the length of the user's name
{
    int len{};
    len = static_cast<int>(name.length());
    return len;
}

int getAge()            // getting age of the user
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