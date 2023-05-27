#include <iostream>
using namespace std;

class Rectangle 
{   
    public:
    int length;
    int breadth;
    
    int area() 
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    int l, b;
    Rectangle r1, r2;
    cout << "Length: ";
    cin >> l;
    cout << "Breadth: ";
    cin >> b;
    r1.length = l;
    r1.breadth = b;
    cout << endl  << "Area: " << r1.area() << "sq. units" << endl;
    cout << "Perimeter: " << r1.perimeter() << "units" << endl;

}
