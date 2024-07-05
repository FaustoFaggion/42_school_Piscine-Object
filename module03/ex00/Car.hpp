#include <iostream>

class Engine {

    private:
        float speed;
    
    public:
        void    start(){ std::cout << "engine start" << std::endl; };
        void    stop() { std::cout << "engine stop" << std::endl;};
        void    accelerate(float speed) { this->speed = speed; };
};

class ShiftGear {
    
    private:
        int gear;
    public:
        void    shift_gears_up() {
            if (this->gear < 6)
                this->gear++;
            std::cout << "shift gear up" << std::endl;
        };
        void    shift_gears_down() {
            if (this->gear > 0)
            this->gear--;
            std::cout << "shift gear down" << std::endl;
        };
        void    reverse() {
            std::cout << "shift reverse" << std::endl;
        };
};

class Wheel {
    private:
        int angle;
    public:
        void    turn_wheel(int angle) {
            std::cout << "turn wheel " << angle << " degrees" << std::endl;
        };
        
        void    straighten_wheels() {
            this->angle = 0;
            std::cout << "straighten wheel" << std::endl;
        };
};

class Brake {

    public:
        void    apply_force_on_brakes(int force) {
            std::cout << "apply " << force << " kgf on brakes" << std::endl;
        }
        void    apply_emergency_brakes() {
            std::cout << "apply emergency brake" << std::endl;
        };
};

class Car {

    private:
        Engine          *engine;
        ShiftGear       *shift_gear;
        Wheel           *wheel;
        Brake           *brake;

    public:
        Car() {
            engine = new Engine();
            shift_gear = new ShiftGear();
            wheel = new Wheel();
            brake = new Brake();
        };

        ~Car() {
            delete engine;
            delete shift_gear;
            delete wheel;
            delete brake;
         };

        void start(){
            engine->start();
        }

        void stop(){
            engine->stop();
        }
        void accelerate(float speed_){
            engine->accelerate(speed_);
        }
        void shift_gears_up(){
            shift_gear->shift_gears_up();
        }
        void shift_gears_down(){
            shift_gear->shift_gears_down();
        }
        void reverse(){
            shift_gear->reverse();
        }
        void turn_wheel(float angle_){
            wheel->turn_wheel(angle_);
        }
        void straighten_wheels(){
            wheel->straighten_wheels();
        }
        void apply_force_on_brakes(float force_){
            brake->apply_force_on_brakes(force_);
        }
        void apply_emergency_brakes(){
            brake->apply_emergency_brakes();
        }
};
