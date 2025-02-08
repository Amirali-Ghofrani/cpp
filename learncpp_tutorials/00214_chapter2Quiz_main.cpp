#include "00214_chapter2Quiz_io.h"

int main()
{
    int value_1{readNumber()};
    int value_2{readNumber()};

    writeNumber(value_1 + value_2);
}