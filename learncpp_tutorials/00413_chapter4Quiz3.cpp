/*
Write a short program to simulate a ball being dropped off of a tower. To start,
the user should be asked for the height of the tower in meters. Assume normal gravity
(9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds.
The function can calculate how far the ball has fallen after x seconds using the following formula:
distance fallen = gravity_constant * x_seconds2 / 2
*/

#include <iostream>

double heightInput()  // to get the initial height of the ball from the user
{
    std::cout << "Please enter the initial height of the ball: ";
    double height{};
    std::cin >> height;

    return height;
}

double currentHeight(double height, int time) // returns height of the ball given the initial 
{                                              //height and time since the ball has been dropped
    double gravity {9.8};
    double current_height{};
    current_height = height - (gravity*time*time)/2;

    return current_height;
}

void print(double current_height, int time) // prints height of the ball at a specific second of time
{
    std::cout << "at " << time << " seconds, the ball is at height: " << current_height <<"\n";
}

int main()
{
    double height{};  
    height = heightInput();

    int time{0};
    double current_height = currentHeight(height, time);

    while (current_height > 0) // runs as long as the ball is not on the ground
    {
        print(current_height, time);
        time ++;
        current_height = currentHeight(height, time);
    }
    
    std::cout << "at " << time << " seconds, the ball is on the ground";
   
    return 0;
}