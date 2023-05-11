#include <iostream>
using namespace std;

int main()
{
	int m, n, sum = 0;
	cout << "Enter number: ";
	cin >> m;
	n = m;

	while (m > 0)
	{
		int r = m % 10;
		sum += r * r * r;
		m /= 10;
	}

	if (sum == n)
	{
		cout << "armstrong";
	}
	else { cout << "not armstrong"; }

}

