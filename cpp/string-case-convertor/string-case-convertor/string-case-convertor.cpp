#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, result;
    string::iterator it;

    cout << "Enter a string: ";
    getline(cin, input);

    for (it = input.begin(); it != input.end(); it++)
    {
        if (*it>=90 && *it>=122)
        {
            *it -= 32;
        }
        result += *it;
    }

    cout << "Converted string: " << result;
    return 0;
}
