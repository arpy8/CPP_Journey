#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[100], s2[100];

    // string length
    cout << "Enter a string: ";
    cin.getline(s1, 100);
    cout << "Length is " << strlen(s1);

    
    // string concat
    cout << "Enter a string: ";
    cin.getline(s2, 100);
    strcat(s1, s2);
    cout << s1;

}