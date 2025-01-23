#include <iostream>

int main()
{
    for(int starCount = 4 ; starCount > 0; starCount--)   //prints first and second raw for 4 times
    {
        for(int starRaw = 6 ; starRaw > 0; starRaw--) //prints first raw of stars including 6 stars
            std::cout<<"*   ";                         
        
        std::cout<<"* ";                               // the 7th star of the first raw + 1 space

        for(int line = 35; line > 0; line--)          //white and red lines of the flag
            std::cout<<"=";  
        
        std::cout<<"/";

        std::cout<<std::endl<<"  ";                  //prints the second raw of stars including 6 stars
        for(int s2 = 6 ; s2 > 0; s2--) 
        {
            std::cout<<"*   ";
        }
        std::cout<<std::endl;
    }


    for(int lineCount = 4; lineCount > 0; lineCount-- ) //prints the inferior lines
    {
        for(int line_2 = 61 ; line_2 > 0; line_2--) 
            std::cout << "=";

        std::cout << "/" << std::endl << std::endl;    //prints spaces between the lines
    }

}