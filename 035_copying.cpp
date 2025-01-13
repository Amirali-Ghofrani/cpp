#include <iostream>
#include <string>

struct Vector2
{
    float x, y;
};

int main()
{
    int a = 2;
    int b = a; //we are creating a copy of var a with a different memo address
                // so when a or b is changed, the other var will remain the same
    Vector2 c = {2, 3};
    Vector2 d = c;
    d.x = 5;  //d is a copy of c in a different memo address so when we change d, c remains the same

    Vector2* e = new Vector2();
    Vector2* f = e; // in this case pointer e and f are pointing to the same memo address
    f -> x = 2;
    f -> y = 5; //this operation affects both e and f
}