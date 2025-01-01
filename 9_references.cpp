#include <iostream>

void Increment(int* value)
{
    (*value)++; // if we do not use * as reference, it will increment the
               // value itself(the address) not the variable(a)
               // we should put *value in brakets due to order of operations   
}

void Increment_2 (int& value_2)
{
    value_2++;   //exactly like the first function but uses reference 
                 //instead of pointers
}


int main()
{

int var = 5;
int& ref = var; // ref is the reference (alternative name) for var
                // ref is not a true variable and does not occupy memory
                //ref is just an allias for var


int a = 5;
Increment(&a); // passing a variable by its memo address

int b = 7;
Increment_2(b);

// when a reference is declared, it is not possible to change what it
//references to

} 