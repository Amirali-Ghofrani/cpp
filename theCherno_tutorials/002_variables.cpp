#include <iostream>

int main()
{
	std::cout << "Hello, world!"<< std::endl;
	
    int variable = 8;  // integer: variable for storing -2b to +2b
                        // considers 4 bytes(32 bits) for each int,
                        //1 for sign and 31 for storing numbers -2b to +2b
    std::cout << variable<< std::endl; 	
    
    unsigned int variable2 = 23; // uses all 32 bits to store numbers from 0 to 4b 
    std::cout<< variable2<<std::endl;

    // char 1 byte, short 2 bytes, long 4 bytes, long long 8 bytes, long int, etc.
    // unsigned can be used for all of them
    // we can also store numbers in char and also characrets in other variables!

    char myChar = 65;
    std::cout<< "myChar is:" << myChar<<std::endl; // prints "A" cause its assosiated with code 65,
                                        // and treats it like a charachter
    
    short myShort = 'A';
    std::cout<< "myShort is:"<< myShort<<std::endl;    // treats the charachter like a number and prints its
                                             // assigned code 

//float: 4 bytes large
    float myFloat = 5.5f; // we have to add "f" to the end of the number for it
                          // to be cosidered a float, otherwise its defined as a double!
    std::cout<< "myFloat is:"<<myFloat<<std::endl;

// double: 8 bytes large
   double myDouble = 6.8; // or simply: float myDouble = 6.8 (without "f" at the end)!
   std::cout<< "myDouble is:"<< myDouble<< std::endl;

// bool:
   bool myBool = true;  // only ture or false, occupies 1 byte of memory just to
                        // store true or false!
   std::cout<<"myBool is:"<<myBool<<std::endl; // prints "1" which means true!

// sizeof built-in function to get size of each variable
   std::cout<< sizeof(bool)<<std::endl;
   std::cout<< sizeof(int)<<std::endl;
   std::cout<< sizeof(float)<<std::endl;
   std::cout<< sizeof(double)<<std::endl;
   std::cout<< sizeof(char)<<std::endl;

//End of variables session! :-D

}
