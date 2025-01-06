#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{

    "Cherno"; //a const char array of size 7. the last is the null termination character("\0")
    char* name = "Cherno"; //!! this causes undefined behavior in some compilers!
    const char* name2 = "Cherno";  //1 byte per character-UTF-8
                                  //strings should be defined this way if they are constant
                                 //(dont need to be manipulated) 
    char name3[] = "Cherno"; //we can define them as arrays if we need manipulation

    const wchar_t* name4 = L"Cherno"; //wide char, usually 2 bytes per char based on compiler

    const char16_t* name5 = u"Cherno"; //2 bytes per character- UTF-16
    const char32_t* name6 = U"Cherno"; // 4bytes per character- UTF-32

    const char* name7 = u8"Cherno"; 

    using namespace std::string_literals;
    
    std::u32string name0 = U"Cherno"s + U" Hello"; 

    // R skips escape characters. we can aslo use /n alternatively

    const char* example = R"(line1 
    line2
    line3)";
    std::cout << example << std::endl;

}