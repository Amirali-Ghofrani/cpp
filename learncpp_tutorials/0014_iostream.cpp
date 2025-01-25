// this code is inspired by the lesson number 1.4 of learncpp.com series
// and shows how cout buffer flush works!
// you can comment out either bufferFlush_1
//or bufferFlush_2 functions in
//the main function to compare them with one another! 

#include <iostream>
#include <unistd.h>  //required library for sleep command

void bufferFlush_1()
{
    //the loop shows how cout buffer works!
    //nothing will be printed to the consol 
    //until the endl command in line 16
    for ( int i = 0; i < 5 ; i++ )
    {
        std::cout << "Buffer Line" << i  << "   ";
        sleep( 2 );
    }
    
    std::cout << "now the compiler is about to flush the buffer!";    
    sleep (2);
    
    // the cout command won't flush the buffer
    //  until the endl command in the next line
    std::cout << std::endl;
    sleep( 2 );
    
    std::cout << "The buffer is flushed!" << std::endl;
    sleep(2);
    
    std::cout << "the end" << std::endl;
}

void bufferFlush_2()
{
    //in contrast, in the second function  
    //the buffer is flushed 5 times in the for loop
    // and each time the consol prints the output

    for ( int j = 0; j < 5 ; j++ )
    {
        std::cout << "Buffer Line" << j  << "   ";
        std::cout << std::endl; //the buffer is flushed
        sleep( 2 );
    }    
    std::cout << "the end" << std::endl;
}

int main()
{
    std::cout << "the first function:" << std::endl;
    bufferFlush_1();

    sleep(2); // just to make the code more readable

    std::cout << "the second function:" << std::endl;
    sleep(2); // just to make the code more readable
    bufferFlush_2();
}