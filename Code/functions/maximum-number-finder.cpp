#include <iostream>
using namespace std;


int max(int a, int b, int c)
{
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    
    return max;
}

int a, b, c;
void main()
{
    cout << "Enter a num 1: ";
    cin >> a;
    cout << "Enter a num 2: ";
    cin >> b;
    cout << "Enter a num 3: ";
    cin >> c;

    cout << "Maximum : " << max(a, b, c) << endl;
}

