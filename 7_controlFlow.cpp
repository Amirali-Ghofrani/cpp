#include <iostream>
//break: gets out of the loop
//continue: breaks one iteration in the loop, 
//if a specified condition occurs, and continues with the next iteration in the loop.
//return: gets out of the entire function
// return; for void functions and return [value]; for non void functions 
// return is not exclusive for loops and can be written anywhere

int main()
{
   for(int i = 0; i < 6; i++ ) 
   {
    
    if ( i % 2 == 0) 
     continue;
    std::cout<<"i =  "<<i<<std::endl; //only runs this line if i%2 equals to 0, 
                                      //otherwise skipps the line
   }

   for(int j = 0; j < 6 ; j++)
   {
    if(j > 2)
     break;                         // jumps out of the loop forever when j = 3  
    std::cout<<"j = "<<j<<std::endl;
   }
   
   for(int k = 0; k < 6 ; k++)
   {
    if(k > 2)
     return 0;                         // jumps out of the function (int main())  
    std::cout<<"k = "<<k<<std::endl;
   }

}