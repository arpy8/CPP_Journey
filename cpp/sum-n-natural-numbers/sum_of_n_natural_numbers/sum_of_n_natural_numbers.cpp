#include <iostream>
using namespace std;

int main()
{
	int num, sum;
	cout << "Sum of First N Natural Numbers\n";
	cout << "Enter your number: ";
	cin >> num;
	
	sum = num * (num + 1) / 2;

	cout << "Sum of first n natural numbers is " << sum;

	return 0;
}
