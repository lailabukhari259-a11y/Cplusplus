#include <iostream>
using namespace std;
class Area
{
public:
    void area(int side)               
    {
        cout << "Area of Square = " << side * side << endl;
    }

    void area(int length, int width)  
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};
class Shape
{
public:
    void area()
    {
        cout << "Area of Shape" << endl;
    }
};
class Circle : public Shape
{
public:
    void area()
    {
        cout << "Area of Circle = pi * r * r" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout << "Area of Triangle = 1/2 * base * height" << endl;
    }
};

int main()
{
    cout << "=== Compile-Time Polymorphism ===" << endl;
    Area a;
    a.area(5);        
    a.area(4, 6);     

    cout << "\n=== Run-Time Polymorphism ===" << endl;

    Shape* s;

    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}

