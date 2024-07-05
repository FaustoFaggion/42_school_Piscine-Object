#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"

class Rectangle: public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(double newLength, double newWidth);
    ~Rectangle();
    void calculateArea();
    void calculatePerimeter();
};

Rectangle::Rectangle(double newLength, double newWidth) : Shape(0, 0)
{
    length = newLength;
    width = newWidth;
};

Rectangle::~Rectangle()
{

};

void Rectangle::calculateArea()
{
    double area = length * width;
    std::cout << "Calculate Area: " << area << std::endl;
}

void Rectangle::calculatePerimeter(){
    double perimeter = 2 * (length * width);
    std::cout << "Calculate Perimeter: " << perimeter << std::endl;
}

#endif
