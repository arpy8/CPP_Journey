#include <iostream>
#include <string>
using namespace std;

int main()
{
    string endline, name;
    endline = " is my faviourite person.";

    cout << "Enter your name: ";
    getline(cin, name);
    
    name += endline;
    
    cout << name;
}
