// nature-of-quadratic-roots.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	float r1, r2, d;
	cout << "Enter the coeffs: ";
	cin >> a >> b >> c;

	d = sqrt(b*b - 4 * a * c);

	if (d != 0) {
		if (d > 0) {
			r1 = (-b + sqrt(d)) / (2 * a);
			r2 = (-b - sqrt(d)) / (2 * a);
			cout << "real and unequal " << r1 << " " << r2;
		}
		else {
			cout << "imaginary";
		}
	}

	else {
		r1 = -b / (2 * a);
		cout << "real and equal " << r1;
	}

}

