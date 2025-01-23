#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

static int s_Level_2 = 99;
static int s_Speed_2 = 2;

int main()
{
    if(s_Level > 5)
        s_Speed = 10;
    else
        s_Speed = 5;

    s_Speed = s_Level > 5 ? 10 : 5; //the exact same code as the if statement above,
                                   //but cleaner and technically faster
    
    std::string rank = s_Level > 10 ? "Master" : "Begginer";

    s_Speed_2 = s_Level_2 > 5 && s_Level_2 < 100 ? s_Level_2 > 10 ? 15 : 10 : 5; //nested conditional statements, NOT recommended!
    std::cout << s_Speed_2 << std::endl;                                        //its not clean though!
}