#include <math.h>
#include <iostream>
#include "Car.h"

using namespace std;
Car::Car()
{
}

Car::Car(double wheelBase, double distance, double steeringAngle) :
wheelBase_(wheelBase),
distance_(distance),
steeringAngle_(steeringAngle)
{
}

double
Car::CalculateTurnRadius() const
{
    return steeringAngle_ == 0 ? 0 : wheelBase_ / sin ( steeringAngle_ * M_PI / 180 );
}

void
Car::CalculateDirection(double& x, double& y, double& newDirection ) const
{
    const double& radius = CalculateTurnRadius();
    double theta  = radius == 0 ? 0 : distance_ / radius;

    x 						= radius * ( 1 - cos ( theta ) );
    y 						= radius * sin ( theta ) ;

    newDirection = theta * 180 / M_PI;
}
