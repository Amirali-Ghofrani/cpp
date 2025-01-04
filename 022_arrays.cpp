#include <iostream>
#include <array>

int main()
{
    const int exampleSize = 5; //storing size of the array in an int var
    int example[5];
    
    example[0] = 2; //this is just an integer and we can treat it like one
    std::cout << example[0] << std::endl; 
    
    std::cout << example << std::endl; // this will show the array address 
                                      //on memory cause example is actually
                                      //a pointer type

    int a = example[0]; //copying the value from example[0] to the new var a           

    example[-1] = 6; //memory access violation! it wont cause errors but maybe
    example[5] = 7; //changes the memory for another variable in our sourcecode
 
    for(int i = 0; i < exampleSize; i++) //initializing all ints in example with a for loop
    {                                   //using exampleSize var (=5) instead of raw number
        example[i] = 2;
    }

    int* ptr = example; //it works fine cause example is a pointer type
    example[2] = 5;  
    *(ptr + 2) = 6; //changes the value of example[2] from 5 to 6
                //because ptr is an int type, +2 adds 8(2*4) to 
                //the ptr
    *(int*)((char*)ptr + 8) = 7; //does the exact previous code, just by  
                                //using char instead of int for changing
                                //the memory address 

int* another = new int[5]; //also creats an array of 5, but dynamically on the heap, and it means its
delete[] another;         //lifetime ends only when we delete it or our programm is finished
                         // in contrast to "int example[5];" which creats the array on the stack
                        //and will be deleted afted at the end of the main func

// arraysize must be kept be the programmer in an integer, and there is no trustworthy method to get the size of an arrasy
//but this method works only for stack allocated arrays(and still not recommended, can mitakenly be applied to a pointer!):

int b [5];
int count = sizeof(b) / sizeof(int);

//with #include<array> we can use C++ standard arrays:
std::array<int, 5> myArray;
std::cout << myArray.size() << std::endl;

} 