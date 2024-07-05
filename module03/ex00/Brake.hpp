#ifndef Brake_hpp
#define Brake_hpp

#include <iostream>
#include <stdio.h>

class Brake {
private:
    
public:
    Brake();
    ~Brake();
    void applyBrake();
    void emergency_brakes();
};

Brake::Brake()
{
};

Brake::~Brake()
{
};

void Brake::applyBrake(){
    std::cout << "Brakes applied" << std::endl;
}

void Brake::emergency_brakes(){
    std::cout << "Emergency brakes applied" << std::endl;
}


#endif
