#include <iostream>
using namespace std;

int main()
{
	int m, n, r, rev = 0;
	cout << "Enter number: ";
	cin >> n;
	m = n;

	while (n > 0)
	{
		r = n % 10;
		n /= 10;
		rev = rev * 10 + r;
	}

	if (rev == m) { cout << "palindrome"; }
	else { cout << "not palindrome"; }
}

