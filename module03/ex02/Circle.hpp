#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"


class Circle: public Shape
{
    private:
        double radius;
    public:
        Circle(double radius);
        virtual ~Circle();
        void calculateArea();
        void calculatePerimeter();
};

Circle::Circle(double newRadius): Shape(0, 0)
{
    radius = newRadius;   
};

Circle::~Circle()
{
};

void Circle::calculateArea(){
    double area = 3.1415 * radius * radius;
    std::cout << "Calculate Area: " << area << std::endl;
}

void Circle::calculatePerimeter(){
    double perimeter = 2 * 3.14159 * radius;
    std::cout << "Calculate Perimeter: " << perimeter << std::endl;
}

#endif
