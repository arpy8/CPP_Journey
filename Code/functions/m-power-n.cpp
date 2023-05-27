#include <iostream>
using namespace std;

int pow(int m, int n)
{
    int p = 1;

    for (int i = 0; i < n; i++)
    {
        p = p * m;
    }
    return p;
}

void main()
{
    cout << pow(2, 5);
}
