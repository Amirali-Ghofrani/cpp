#include <iostream>

int main()
{
   int x = 5;
   bool comparisonResult = x == 5;
   // bool actually is an integer which occupies 1 byte of memory,
   // if it is equal to 0 means it is False and if it is any number 
   // except 0, it is considered to be True
   
   if(comparisonResult)   // if statement. 
   {                      // we can also use true, false, 0 or 1 in if statements
    std::cout<<"the statement is true"<<std::endl;
   } 

   else
   {
    std::cout<<"the statement is false"<<std::endl;
   }

   if(x)   // runs if x is not equal to 0
      std::cout<<"x is not zero!"<<std::endl;
   else
      std::cout<<"x is zero!"<<std::endl;

   const char* ptr = "Hi!";
   if(ptr)   // prints the pointer if it is not 0
      std::cout<<ptr;
   else
      std::cout<<"the pointer is null";

    // there is no "else if" keyword in cpp
    // else if () 
    // is identical to
    // else
    // {
    //  if()
    //  {

    //  }
    // }



}