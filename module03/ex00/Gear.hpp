#ifndef GEAR_HPP
#define GEAR_HPP

#include <iostream>
#include <stdio.h>

class Gear {
private:
public:
    Gear();
    ~Gear();
    void gearUp();
    void gearDown();
    void putOnReverse();

    friend class Engine;
};

Gear::Gear()
{
};

Gear::~Gear()
{
};

void Gear::gearUp(){
    std::cout << "Gear Up!" << std::endl;
}

void Gear::gearDown(){
    std::cout << "Gear Down!" << std::endl;
}

void Gear::putOnReverse(){
    std::cout << "Gear On Reverse!" << std::endl;
}

#endif
