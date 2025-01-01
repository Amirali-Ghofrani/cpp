#include <iostream>
// a pointer is an integer which holds a memory address

int main()
{
    int var = 8; 
    void* ptr = 0; //we can also use NULL or nullptr instead of 0;
    ptr = &var;
    std::cout<<ptr<<std::endl;


    int var_2 = 6;  //defining a variable
    int* ptr_2 = 0; //defining a pointer
    ptr_2 = &var_2; // assigning the address of variable_2 to ptr_2
    *ptr_2 = 10;  // referencing ptr_2 and writting number 10 in variable_2
                    // for writting, pointer type should be determined
                    // we can't write in a void pointer!
    std::cout<<var_2; 
}