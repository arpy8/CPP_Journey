#include <iostream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str2;

    cout << "Enter you name: ";
    getline(cin, str2);
    str2.front() = "z";
    cout << str2;

}
