//File Name: ShapeTest.cpp
//File Description: This is the test file for the Shape class
//Author: JJ Wagner

#include "Shape.cpp"
#include "Shape.h"
#include <iostream>
    using std::cout;
    using std::endl;
    using std::cin;
#include <string>
    using std::string;
    using std::getline;
#include <iomanip>
    using std::setprecision;

#include "Shape.h"

int main()
{
    //Create a triangle
    Shape triangle("triangle", 3, 4);
    //Create a rectangle
    Shape rectangle("rectangle", 8, 120);
    //Create a circle
    Shape circle("circle", 4, 0);

    //Print the perimeters
    cout << "The perimeter of the triangle is: " << triangle.getPerimeter() << endl;
    cout << "The perimeter of the rectangle is: " << rectangle.getPerimeter() << endl;
    cout << "The perimeter of the circle is: " << circle.getPerimeter() << endl;

    //Print the areas
    cout << "The area of the triangle is: " << triangle.getArea() << endl;
    cout << "The area of the rectangle is: " << rectangle.getArea() << endl;
    cout << "The area of the circle is: " << circle.getArea() << endl;

    return 0;
};