#ifndef Wheel_hpp
#define Wheel_hpp

#include <iostream>
#include <stdio.h>

class Wheel {
private:
    int angle;
    void setAngle(int newAngle);
    
public:
    Wheel();
    ~Wheel();
    void turnWheel(int angle);
    void straightenWheels();
};

Wheel::Wheel() : angle(0)
{
};

Wheel::~Wheel()
{
};

void Wheel::setAngle(int newAngle)
{
    if (newAngle >= -360 && newAngle <= 360) {
        angle = newAngle;
    } else {
        std::cout << "The value needs to be between -360° and 360°" << std::endl;
    }
}

void Wheel::turnWheel(int newAngle){
    setAngle(newAngle);
}

void Wheel::straightenWheels()
{
    setAngle(0);
    std::cout << "Straight ahead angle of a wheel to 0°" << std::endl;
}


#endif