#include <iostream>

class Player  //now we have a class type
{
public:       //classes are private by default, we have to make them 
              // public to access them from the main function
    int x = 0, y = 0;
    int speed = 5;
};

void Move(Player& player , int xa , int ya) // modification of player with passing player 
{                                           // using a reference to player
    player.x += xa * player.speed; 
    player.y += ya * player.speed;
}
 
 /////////////////////////////////////////////////////////////////

class Player_2  
{

public:      
    int x = 0, y = 0;
    int speed = 5;

    void Move_2(int xa , int ya)  //building a function inside a class  
    {                             //which is called a method             
        x += xa * speed;
        y += ya * speed;
    }

};



int main()
{
    Player player;     //moves player
    Move(player, 1, -2);

    Player_2 player_2;  //moves player_2
    player_2.Move_2(1, -2);

    std::cout<<"player x,y: "<<player.x<<","<<player.y<<std::endl //prints player location status
    <<"player_2 x,y: "<<player_2.x<<","<<player_2.y<<std::endl;

}