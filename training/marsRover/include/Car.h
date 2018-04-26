#pragma once

class Car
{
public:
    Car();
    Car(double wheelBase, double distance, double steeringAngle);
    ~Car();
    double CalculateTurnRadius() const;
    void CalculateDirection(double& x, double& y, double& newDirection ) const;
private:
    double wheelBase_;
    double distance_;
    double steeringAngle_;
};
