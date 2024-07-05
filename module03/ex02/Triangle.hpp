#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"


class Triangle: public Shape
{
    private:
        double lengthA;
        double lengthB;
        double lengthC;
    public:
        Triangle(double lengthA, double lengthB, double lengthC);
        virtual ~Triangle();
        void calculateArea();
        void calculatePerimeter();
};

Triangle::Triangle(double newlengthA, double newlengthB, double newlengthC): Shape(0, 0)
{
    lengthA = newlengthA;   
    lengthB = newlengthB;   
    lengthC = newlengthC;   
};

Triangle::~Triangle()
{
};

double ft_sqrt(double x) {
    if (x == 0.0) return 0.0;

    double guess = x;
    double epsilon = 1e-6;

    while (true) {
        double nextGuess = 0.5 * (guess + x / guess);
        if (nextGuess < 0) {
            nextGuess = -nextGuess;
        }
        if (nextGuess - guess < epsilon && guess - nextGuess < epsilon) {
            return nextGuess;
        }
        guess = nextGuess;
    }
}

void Triangle::calculateArea(){
    if (lengthA + lengthB > lengthC && lengthA + lengthC > lengthB && lengthB + lengthC > lengthA) 
    {
        double s = (lengthA + lengthB + lengthC) / 2;
        area = ft_sqrt(s * (s - lengthA) * (s - lengthB) * (s - lengthC));
        std::cout << "Calculate Area: " << area << std::endl;
    } else {
        std::cout << "Invalid angles." << std::endl;
    }
}

void Triangle::calculatePerimeter(){
    perimeter = lengthA + lengthB + lengthC;
    std::cout << "Calculate Perimeter: " << perimeter << std::endl;
}

#endif
