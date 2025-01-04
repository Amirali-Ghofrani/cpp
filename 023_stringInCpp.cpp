#include <iostream>

int main()
{
    const char* name = "Cherno!"; //C-Style string defenition without using C++ modern libraries
                                //strings are normally an array of characters, which each charachter
                                //occupying one byte of memo and using ASCII coding.
    //every string finishes with a 0 on memory, that's how the compiler finds out where an string ends.

    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};
    char name3[7] = {'C', 'h', 'e', 'r', 'n', 'o', 0}; // this is not a string but an array of characters,
                                                        //which we initialized manually. note that we have to
                                                        //put the 0 value at the end for compiler to know the 
                                                        //end of our array. so it is in strings
    std::cout<< name <<std::endl << name2 << std::endl << name3 << std::endl; 

}