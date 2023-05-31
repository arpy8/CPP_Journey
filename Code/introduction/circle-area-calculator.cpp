#include <iostream>

using namespace std;

int main()
{
    float r, area, peri;
    cout << "Enter radius: ";
    cin >> r;
    area = 3.1415f * r * r;
    peri = 3.1415f * r * 2;
    cout << "Area : " << area << " sq. units\n";
    cout << "Perimeter : " << peri << " units";

}