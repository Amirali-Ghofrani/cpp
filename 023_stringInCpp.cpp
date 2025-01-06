#include <iostream>
#include <string>

void PrintString(const std::string& myString)
{
    std::cout << myString << std::endl; //calling strings by reference in read only functions
                                        // in order to avoid copying
}

int main()
{
    const char* name = "Cherno!"; //C-Style string defenition without using C++ modern libraries
    PrintString(name);           //strings are normally an array of characters, which each charachter
                                //occupying one byte of memo and using ASCII coding.
                                //strings in C++ are const chars so we need const char pointers.
    //every string finishes with a 0 on memory, that's how the compiler finds out where an string ends.

    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};
    char name3[7] = {'C', 'h', 'e', 'r', 'n', 'o', 0}; // this is not a string but an array of characters,
                                                        //which we initialized manually. note that we have to
                                                        //put the 0 value at the end for compiler to know the 
                                                        //end of our array. so it is in strings
    std::cout<< name <<std::endl << name2 << std::endl << name3 << std::endl; 

    std::string name4 = "Cherno"; //string lib. must be added. iostream has a defenition for strings but for 
                                  //pushing strings in cout we need the string lib.
                                  //this is also a const char array.
    std::cout << name4.size() << std::endl; //size of the string

    //std::string name5 = "Cherno" + " Hello"; //this command will get an error bcz name5 is a const char string
                                              //not a real string. 2 ways to do that:
    //first:                                              
    std::string name5 = "Cherno";
    name5 += " Hello";                

    //second:
    std::string name6 = std::string("Cherno") + " Hello!";

    std::cout << name5 << std::endl << name6 << std::endl;          

    bool contains = name6.find("no") != std::string::npos; // it will return the position of "no"
    std::cout << contains << std::endl;                    // npos: illegal position
}