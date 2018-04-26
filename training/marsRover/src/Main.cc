#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

int main(int argc, char* argv[])
{
    double wheelBase = 1.00f;
    double distance = 1.00f;
    double steeringAngle = 30.00f;

    if (argc == 4)
    {
        try {
            wheelBase = stod(argv[1]);
            distance = stod(argv[2]);
            steeringAngle = stod(argv[3]);
        }
        catch (...)
        {
            cout << "Bad parameters ... " << endl;
            cout << "Exiting" << endl;
            return -1;
        }
    }

    Car* myCar = new Car(wheelBase, distance, steeringAngle);
    double x = 0.00f;
    double y = 0.00f;
    double newDirection = 0.00f;
    myCar->CalculateDirection(x, y, newDirection);
    cout << "Calculated radius : " << std::to_string(myCar->CalculateTurnRadius()) << endl;
    cout << "Position x [" << x << "], y [" << y << "], newDirection [" << newDirection << "]" << endl;
    return 0;
}

