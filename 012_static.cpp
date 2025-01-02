#include <iostream>

static int s_Variable = 5;
// static variables are private for a class, 
//the linker is not gonna see them in a global scope
//static variable or functions are only visible for the 
//current cpp file
//it's better to use static variables and avoid defining 
//them as global until its really needed
int s_Variable_2 = 6;  //comments in 012_staticTest.cpp

static void test()
{

std::cout << s_Variable;

}