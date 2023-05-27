#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string::iterator it;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (it = str.begin(); it != str.end(); it++) count++; 

    cout << "String Length : " << count;

    return 0;
}
