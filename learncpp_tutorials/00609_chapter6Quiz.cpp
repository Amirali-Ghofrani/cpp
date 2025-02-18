/*
Quiz time

Complete the following program:
*/

#include <iostream>
#include <string>

// Write the function getQuantityPhrase() here

std::string getQuantityPhrase(int appleNumber)
{
 
    if (appleNumber < 0)
        return "negative";

    if (appleNumber == 0)
        return "no";

    if (appleNumber == 1)
        return "a single";

    if (appleNumber == 2)
        return "a couple of";
    
    if (appleNumber == 3)
        return "a few";

    if (appleNumber > 3)
        return "many";

}

// Write the function getApplesPluralized() here

std::string getApplesPluralized(int appleNumber)
{
    if (appleNumber == 1)
        return "apple";
    return "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}