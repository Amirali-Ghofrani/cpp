#include <iostream>

int main()
{
   for(int i = 0; i < 5; i++ ) //first and 3rd arguments are optional
   {                           //2nd argument is in fact a boolean 
                               //and we can just place a bool there 
    std::cout<<"Hello "<<i<<std::endl;
   }
   
   std::cout<<"==============="<<std::endl; // just seperates the outputs!
   
   int j = 0;
   while(j < 5) // only has 1 argument for condition
   {
    std::cout<<"Hello again!"<<std::endl;
    j++;
   }
   
   int k = 0;
   do
   {
    std::cout<<"the do part will run at least once no matter what!"<<std::endl;
    k++;
   } while (k < 5);
   
   std::cin.get();
}