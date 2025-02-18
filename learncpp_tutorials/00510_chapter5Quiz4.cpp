#include <iostream>
#include <string>
#include <string_view>

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

void print (std::string_view name1, int age1, std::string_view name2, int age2)
{
    if (age1 > age2)
        std::cout << name1 <<" (age " << age1 <<") is older than " << name2
        << " (age " << age2 <<")\n"; 
    
    else if (age1 < age2)
    std::cout << name2 <<" (age " << age2 <<") is older than " << name1
    << " (age " << age1 <<")\n"; 

}


int main()
{
    int count{1};

    const std::string name1 {getName(count)};
    const int age1 {getAge(count)};

    ++count;

    const std::string name2 {getName(count)};
    const int age2 {getAge(count)};

    print(name1, age1, name2, age2);

}