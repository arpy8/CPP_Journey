#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area() { cout << "Rectangle Area" << endl; }
};

class Cuboid : public Rectangle
{
public:
    void volume() { cout << "Cuboid Volume" << endl; }
};

int main()
{
    Cuboid c;
    Rectangle* p = &c;
    p->area();
    //p->volume();
}
