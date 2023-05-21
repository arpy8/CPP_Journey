#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "ABCD", str2 = "1234";


    cout << "String 1 : ";
    getline(cin, str1);
    
    cout << "String 2 : ";
    getline(cin, str2);
    cout << endl;
    
    if (str1.compare(str2) > 0)
    {
        cout << "String 1 is greater than string 2";
    }
    else if (str1.compare(str2) < 0)
    {
        cout << "String 2 is greater than string 1";
    }
    else 
    {
        cout << "Strings are equal.";
    }

    cout << endl;

    return 0;
}
