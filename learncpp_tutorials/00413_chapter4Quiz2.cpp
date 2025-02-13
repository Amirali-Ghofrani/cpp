/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.
*/

#include <iostream> // for std::cin/cout

double inputNumber() // gets a floating point number fron the user
{
    std::cout << "Enter a floating point number please: ";
    double input{};
    std::cin >> input;

    return input;
}

char inputSymbol()  // gets a symbol from the user
{
    std::cout << "Enter a symbol: \"+\", \"-\", \"*\" or \"/\":";
    char symbol{};
    std::cin >> symbol;

    return symbol;
}


void print(double x, double y, char symbol) //prints the required result if the symbol is valid
{                                           // and prints nothing if the symbol is invalid
    if (symbol == '-')
        std::cout << "x " << symbol << " y = " << x - y;

    else if (symbol == '+')
        std::cout << "x " << symbol << " y = " << x + y;

    else if (symbol == '*')
        std::cout << "x " << symbol << " y = " << x * y;

    else if (symbol == '/')
        std::cout << "x " << symbol << " y = " << x / y;
}

int main()
{
    double x{};
    x = inputNumber();

    double y {};
    y = inputNumber();

    char symbol{};
    symbol = inputSymbol();
    
    print(x, y, symbol);
    
    return 0;
}