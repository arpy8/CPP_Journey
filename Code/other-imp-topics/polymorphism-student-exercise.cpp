#include <iostream>
using namespace std;

class Shape 
{
public:
    virtual void draw() = 0;
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape 
{
private:
    float length, breadth;
public:
    Rectangle(int l=1, int b = 1) { length = l; breadth = b; }

    void draw() { cout << "drawing a circle"; }
    float area() { return length * breadth; }
    float perimeter() { return 2*(length+breadth); }
};

class Circle : public Shape
{
private:
    float radius;
public:
    Circle(int r = 1) { radius = r; }

    void draw() { cout << "drawing a circle"; }
    float area() { return 3.14*radius*radius; }
    float perimeter() { return 3.14 * radius * 2; }
};


int main()
{
    cout << "Polymorphism" << endl;
    Shape* p = new Rectangle(5,3);
    cout << "Area of rectangle is " << p->area() << endl;

    p = new Circle(15);
    cout << "Area of circle is " << p->area() << endl;

}

