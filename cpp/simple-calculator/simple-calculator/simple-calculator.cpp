#include <iostream>
using namespace std;

int main()
{
	int n1, n2, op;
	float rslt;
	
	cout << "1. Add\n2. Sub\n3. Mul\n4. Div\n";
	cin >> op;
	cout << "Enter num 1: ";
	cin >> n1;
	cout << "Enter num 2: ";
	cin >> n2;

	switch (op)
	{
	case 1: rslt = n1 + n2; break;
	case 2: rslt = n1 - n2; break;
	case 3: rslt = n1 * n2; break;
	case 4: rslt = n1 / n2; break;
	default : cout << "Invalid choice";
	}
	cout << "Result is " << rslt << endl;
	return 0;
}
