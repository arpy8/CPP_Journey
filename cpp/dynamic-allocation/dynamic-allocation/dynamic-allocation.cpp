#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int *p = new int[size];
    cout << sizeof p << endl;
    
    delete p;

    cout << "Enter new size: ";
    cin >> size;
    p = new int[size];
    cout << sizeof p;
    
    return 0;
}

