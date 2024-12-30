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

    // char 1 byte, short 2 bytes, long 4 bytes, long long 8 bytes, long int,...
    // unsigned can be used for all of them
    // we can also store numbers in char and also characrets in other variables!
}