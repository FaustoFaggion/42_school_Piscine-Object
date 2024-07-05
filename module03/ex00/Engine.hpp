#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <stdio.h>
#include <iostream>
#include "Gear.hpp"

class Engine
{
    private:
        int     speed;
        bool    engineOn;
    public:
        Gear    gear;
        Engine();
        ~Engine();
        void    turnOn();
        void    turnOff();
        void    accelerate(int newSpeed);
};

Engine::Engine() : speed(0){};

Engine::~Engine(){};

void Engine::turnOn()
{
    this->engineOn = true;
    std::cout << "Engine On" << std::endl;
}

void Engine::turnOff()
{
    this->engineOn = false;
    this->speed = 0;
    std::cout << "Engine Off" << std::endl;
}

void Engine::accelerate(int newSpeed)
{
    if (newSpeed > 0){
        this->speed = this->speed + newSpeed;
        std::cout << "Car acelerate to " << this->speed << std::endl;
    }
}
#endif
