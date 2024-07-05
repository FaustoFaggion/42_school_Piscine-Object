#include "Car.hpp"

int main () {
    
    
    Car carro;
    carro.start();
    carro.stop();
    carro.accelerate(1);
    carro.shift_gears_up();
    carro.shift_gears_down();
    carro.reverse();
    carro.turn_wheel(2);
    carro.straighten_wheels();
    carro.apply_force_on_brakes(3);
    carro.apply_emergency_brakes();

    std::cout << "Fim." << std::endl;



    return 0;
};