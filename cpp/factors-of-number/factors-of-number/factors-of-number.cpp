#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    
    cout << "Enter number: ";
    cin >> num;
    
    while (i<=num) 
    {
        if (num % i == 0) { cout << i << endl; }
        i++;
    }

    return 0;
}

