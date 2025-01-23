#include <iostream>

class Entity
{
public:
    float X,Y;
    
    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};


class Player : public Entity // the player class now has not only the type  
                            //Player but also the type Entity
                           //now anything that is not private in Entity
                          //is accessible by Player
{
public:
    const char* Name;

    void printName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{
    Player player;
    player.Move(1, 2); //now player can access Move(),X and Y just like Entity!
    player.X = 2;

}