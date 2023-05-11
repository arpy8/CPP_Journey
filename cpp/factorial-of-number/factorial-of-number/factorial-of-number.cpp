#include <iostream>
using namespace std;

int main()
{
    int num, factorial = 1;
    cout << "Enter number: ";
    cin >> num;

    for (int i=1;num>=i;i++) 
    {
        factorial *= i;
    }
    cout << factorial;
    cout << factorial;
     
}

