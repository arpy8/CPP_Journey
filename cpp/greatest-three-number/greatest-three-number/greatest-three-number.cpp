#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    max = a;

    if (max < b) { max = b; }
    if (max < c) { max = c; }

    cout << max;
   
}
