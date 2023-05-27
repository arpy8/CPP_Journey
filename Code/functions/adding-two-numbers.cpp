
#include <iostream>
using namespace std;

int n1, n2;

int add(int num1, int num2) 
{
    return num1 + num2;
}

void main()
{
    cout << "Enter a num 1: ";
    cin >> n1;
    cout << "Enter a num 2: ";
    cin >> n2;

    cout << "Sum is " << add(n1, n2) << endl;
}

