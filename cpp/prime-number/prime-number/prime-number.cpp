#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, count = 0;

    cout << "Enter number: ";
    cin >> num;

    while (i <= num)
    {
        if (num % i == 0) { count += 1; }
        i++; 
    }
    if (count == 2) { cout << "Prime number"; }
    else { cout << "Not a prime number"; }



}

