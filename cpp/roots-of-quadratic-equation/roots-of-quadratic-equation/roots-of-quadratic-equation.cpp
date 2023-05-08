#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    float r1, r2;

    cout << "Roots of Quadratic Equations\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Roots of the Quadratic equation are:\n";
    cout << r1 << ", " << r2;


    return 0;
}
