//File Name: Shape.h
//File Description: This is the header file for the Shape class
//Author: JJ Wagner

#ifndef SHAPE_H
#define SHAPE_H

#include <string>
    using std::string;

class Shape
{
    private:
        string const name;
        double dimension1;
        double dimension2;
    
    public:
        //Empty Constructor
        Shape();
        //Full Constructor
        Shape(string, double, double);

        //Setters
        void setName(string);
        void setDimension1(double);
        void setDimension2(double);

        //Getters
        string const getName();
        double getDimension1();
        double getDimension2();

        //Additional functions;
        double getPerimeter();
        double getArea();
};

#endif;