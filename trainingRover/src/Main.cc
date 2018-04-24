#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

int main(int argc, char* argv[])
{
    float wheelBase = 1.00f;
    float distance = 1.00f;
    float steeringAngle = 30.00f;

    if (argc == 4)
    {
        try {
            wheelBase = stof(argv[1]);
            distance = stof(argv[2]);
            steeringAngle = stof(argv[3]);
        }
        catch (...)
        {
            cout << "Bad parameters ... " << endl;
            cout << "Exiting" << endl;
            return -1;
        }
    }

    Car* myCar = new Car(wheelBase, distance, steeringAngle);
    float x = 0.00f;
    float y = 0.00f;
    float newDirection = 0.00f;
    myCar->CalculateDirection(x, y, newDirection);
    cout << "Calculated radius : " << std::to_string(myCar->CalculateTurnRadius()) << endl;
    cout << "Position x [" << x << "], y [" << y << "], newDirection [" << newDirection << "]" << endl;
    return 0;
}

