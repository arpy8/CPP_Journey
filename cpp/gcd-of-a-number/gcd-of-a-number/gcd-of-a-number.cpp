#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;

    while (m != n)
    {
        if (m > n) { m -= n; }
        else if (n > m) { n -= m; }
    }
    cout << m;

    return 0;
}

