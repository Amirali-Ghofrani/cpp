#include <iostream>

int s_variable = 10;
//we have another s_variable in our programm(012_static.cpp) but
//there will be no errors cause the otherone is defined as a 
//static(local) variable

extern int s_Variable_2; //external linking
//also no errors, cause we are referencing to a variable(s_Variable_2) 
//which is globally defined in another file (012_static.cpp)

void test() //also no errors, the same case for functions 
{

}

int main()
{

std::cout << s_variable << std::endl;

}