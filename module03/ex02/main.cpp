#include <iostream>
#include <vector>
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"

int main()
{
    std::vector<Shape *> shapes;

    Rectangle rectangle(10, 10);
    Circle circle(10);
    Triangle triangle(10, 10, 10);

    shapes.push_back(&rectangle);
    shapes.push_back(&circle);
    shapes.push_back(&triangle);

    std::cout << "Rectangle"  << std::endl;
    rectangle.calculateArea();
    rectangle.calculatePerimeter();
    std::cout << std::endl;
    std::cout << "Circle" << std::endl;
    circle.calculateArea();
    circle.calculatePerimeter();
    std::cout << std::endl;
    std::cout << "Triangle" << std::endl;
    triangle.calculateArea();
    triangle.calculatePerimeter();

    for(std::vector<Shape *>::iterator it = shapes.begin(); it != shapes.end(); it++)
	{
        (*it)->calculateArea();
        (*it)->calculatePerimeter();
	}
    
    return 0;
}
