#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <iostream>
#include "Engine.hpp"
#include "Brake.hpp"
#include "Wheel.hpp"

class Car
{
private:
    Engine  engine;
    Brake   brake;
    Wheel   wheel;

public:
    Car();
    ~Car();
    void start();
    void stop();
    void acelerate(int speed);
    void shift_gears_up();
    void shift_gears_down();
    void reverse();
    void turn_wheel(int angle);
    void straighten_wheels();
    void apply_force_on_brakes();
    void apply_emergency_brakes();
};

Car::Car() : engine()
{
};

Car::~Car(){};

void Car::start()
{
    engine.turnOn();
};

void Car::stop()
{
    engine.turnOff();
    brake.applyBrake();
};

void Car::acelerate(int newSpeed)
{
    engine.accelerate(newSpeed);
};

void Car::shift_gears_up()
{
    engine.gear.gearUp();
};

void Car::shift_gears_down()
{
    engine.gear.gearDown();
};

void Car::reverse()
{
    engine.gear.putOnReverse();
};

void Car::turn_wheel(int angle)
{
    wheel.turnWheel(angle);
};

void Car::straighten_wheels()
{
    wheel.straightenWheels();
};

void Car::apply_force_on_brakes()
{
    brake.applyBrake();
};

void Car::apply_emergency_brakes()
{
    brake.emergency_brakes();
};

#endif
