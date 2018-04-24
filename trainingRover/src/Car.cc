#include <math.h>
#include <iostream>
#include "Car.h"

using namespace std;
Car::Car()
{

}

Car::Car(float wheelBase, float distance, float steeringAngle) :
wheelBase_(wheelBase),
distance_(distance),
steeringAngle_(steeringAngle)
{
}

float
Car::CalculateTurnRadius() const
{
    return wheelBase_ / sin ( steeringAngle_ * M_PI / 180 );
}

void
Car::CalculateDirection(float& x, float& y, float& newDirection ) const
{
    const float& radius = CalculateTurnRadius();
    float theta  = distance_ / radius;
    x 						= radius * ( 1 - cos ( theta ) );
    y 						= radius * sin ( theta ) ;
    newDirection = steeringAngle_ - atan( y / x ) ;
}
