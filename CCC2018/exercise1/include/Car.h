#pragma once

class Car
{
public:
    Car();
    Car(float wheelBase, float distance, float steeringAngle);
    ~Car();
    float CalculateTurnRadius() const;
    void CalculateDirection(float& x, float& y, float& newDirection ) const;
private:
    float wheelBase_;
    float distance_;
    float steeringAngle_;
};
