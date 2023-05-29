#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;
public:
    //constructors
    Rectangle() 
    {
        length = 1;
        breadth = 1;
    }

    //mutators
    void setLength(int l) { length = l; };
    void setBreadth(int b) { breadth = b; };

    //accessors
    int getLength() { return length; };
    int getBreadth() { return breadth; };

    //facilitators
    int area() {return getLength() * getBreadth(); }
    int perimeter() { return 2*(getLength() + getBreadth()); }
};

class Cuboid : public Rectangle
{
private:
    int height;
public:
    Cuboid(int h)
     {
        height = h;
    }
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }

    int volume() { return area() * height; }

};

int main()
{
    Cuboid c(5);
    c.setLength(5);
    c.setBreadth(10);
    cout << c.volume() << endl;

}