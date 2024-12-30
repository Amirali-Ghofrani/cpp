#include <iostream>

int multiply (int a, int b) // this function is gonna return an integer
{                           // void functions return nothing
   return a*b;
}

void multiplyAndLog(int a, int b)
{
   int result = multiply(a,b);  // using a function to build another function
   std::cout<<"result is:"<<result<<std::endl;
}

int main()            // all int functions need a return, except "int main()" function
{
multiplyAndLog(3,5);   //calling the function
multiplyAndLog(4,6);
multiplyAndLog(7,2);
multiplyAndLog(8,3);

std::cin.get();

}

