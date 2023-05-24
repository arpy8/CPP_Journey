#include <iostream>
#include <string>
using namespace std;

int main()
{
    string::reverse_iterator it;
    string str ,reverse;

    cout << "Enter a string: ";
    getline(cin, str);

    for (it = str.rbegin(); it != str.rend(); it++)
    {
        reverse += *it;
    }
    if (str == reverse) cout << "It's a Palindrome.";
    else cout << "Not a palindrome.";
}
