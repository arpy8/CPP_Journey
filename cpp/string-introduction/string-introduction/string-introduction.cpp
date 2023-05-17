#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[100], s2[100];
    cout << "Enter your name: ";
    cin.get(s1, 100);
    cout << "Hello " << s1 << endl;

    cin.ignore();

    cout << "Enter your name: ";
    cin.get(s2, 100);
    cout << "Hello " << s2 << endl;
}

