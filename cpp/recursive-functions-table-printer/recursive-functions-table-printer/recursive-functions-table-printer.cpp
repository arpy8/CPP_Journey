#include <iostream>
#include <cmath>
using namespace std;

void table_printer(int x)
{
    if (x > 0)
    {
        cout << x << endl;
        table_printer(x-1);
    }
}

void main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    table_printer(x);
}
