//File Name: Shape.cpp
//File Description: This is the implementation file for the Shape class
//Author: JJ Wagner

#include "Shape.h"
#include <cmath>
#include <iostream>
    using std::cout;
    using std::endl;
    using std::cin;
#include <string>
    using std::string;
    using std::getline;
#include <iomanip>
    using std::fixed;
    using std::setprecision;

string const Shape::getName()
{
    return name;
};

double Shape::getDimension1()
{
    return dimension1;
};

double Shape::getDimension2()
{
    return dimension2;
};

void Shape::setName(string newName)
{
    name = newName;
};

void Shape::setDimension1(double newDimension1)
{
    dimension1 = newDimension1;
};

void Shape::setDimension2(double newDimension2)
{
    dimension2 = newDimension2;
};

double Shape::getPerimeter()
{
    if (name == "circle");
    {
        return 2 * 3.14159 * dimension1;
    }
    else if (name == "rectangle")
    {
        return 2 * dimension1 + 2 * dimension2;
    }
    else if (name == "triangle")
    {
        return dimension1 + dimension2 + sqrt(pow(dimension1, 2) + pow(dimension2, 2));
    }
    else
    {
        cout << "Invalid shape name" << endl;
        return 0;
};


double Shape::getArea()
{
    if (name == "circle")
    {
        return 3.14159 * pow(dimension1, 2);
    }
    else if (name == "rectangle")
    {
        return dimension1 * dimension2;
    }
    else if (name == "triangle")
    {
        return 0.5 * dimension1 * dimension2;
    }
    else
    {
        cout << "Invalid shape name" << endl;
        return 0;
    }
};

Shape::Shape()
{

};

Shape::Shape(string newName, double newDimension1, double newDimension2)
{
    name = newName;
    dimension1 = newDimension1;
    dimension2 = newDimension2;
};