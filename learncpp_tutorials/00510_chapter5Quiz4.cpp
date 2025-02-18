#include <iostream>
#include <string>

std::string getName(int count)
{
    std::cout << "Please Enter the name of person #" << count <<": ";
    std::string name;
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(int count)
{
    std::cout << "Please enter the age of person #" << count <<": ";
    int age{};
    std::cin >> age;

    return age;
}


int main()
{
    int count{1};

    std::string name1 {getName(count)};
    int age1 {getAge(count)};

    ++count;

    std::string name2 {getName(count)};
    int age2 {getAge(count)};

    if (age1 > age2)
        std::cout << name1 <<" (age " << age1 <<") is older than " << name2
        << " (age " << age2 <<")\n"; 
    
    else if (age1 < age2)
    std::cout << name2 <<" (age " << age2 <<") is older than " << name1
    << " (age " << age1 <<")\n"; 

}