#include <iostream>
#include <cstring>
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

    char* buffer = new char[8]; //new char allocates an area of memory to a
    memset(buffer, 0, 8);       //an array of chars with length of 8 bytes
                               //it stores the starting address in buffer
                              //memset gets the memory starting addr.(buffer),
                             // value to be filled(0), and number of bytes to be filled
    
    char** ptr_3 = &buffer;   //double pointers:ptr_3 is a pointer which stors 
                            //the memory address of buffer(another pointer)
    delete[] buffer;        // deletes buffer

} 