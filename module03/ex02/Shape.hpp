#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"

class Shape
{
protected:
    double area;
    double perimeter;
public:
    Shape(double area, double perimeter);
    virtual ~Shape();
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
};

Shape::Shape(double area, double perimeter) : area(area), perimeter(perimeter)
{
    
};

Shape::~Shape()
{
};

#endif
