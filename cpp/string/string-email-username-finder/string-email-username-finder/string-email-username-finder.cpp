#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, username;

    cout << "Enter a string: ";
    getline(cin, str);
    for (int i=0; str[i]!='@'; i++)
    {
        username += str[i];
    }
    cout << username;
}
