#include <iostream>
#include "Car.hpp"

int main() {

    Car car = Car();
    
    car.start();
    
    car.acelerate(20);
    car.shift_gears_up();
    
    car.acelerate(20);
    car.shift_gears_up();
    
    car.acelerate(20);
    car.shift_gears_up();
    
    car.acelerate(20);
    car.shift_gears_up();
    
    car.acelerate(20);
    car.shift_gears_up();
    
    car.apply_force_on_brakes();
    car.stop();
    
    car.shift_gears_down();
    car.shift_gears_up();
    
    car.reverse();
    
    car.turn_wheel(20);
    car.straighten_wheels();
    
    car.apply_emergency_brakes();
    
    car.stop();
    
    return 0;
}
