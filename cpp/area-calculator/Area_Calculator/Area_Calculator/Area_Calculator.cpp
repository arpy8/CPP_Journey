#include <iostream>
using namespace std;

int main()
{
    float height, breadth, area;
    cout << "Triangle area calculator" << endl;
    cout << "Enter height (in cm): ";
    cin >> height;
    cout << "Enter breadth (in cm): ";
    cin >> breadth;
    area = 0.5 * height * breadth;
    cout << "Area of the triangle is " << area;

}
