#include <iostream>
#include "00214_chapter2Quiz_io.h"

int readNumber()
{
    int input{};
    std::cin >> input;
    return input;
}


void writeNumber(int x)
{
    std::cout << x << std::endl;
} 
