#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    str = "monday";
    string::reverse_iterator it;
    for (it = str.rbegin(); it != str.rend(); it++)
    {
        *it -= 32;
        cout << * it;
    }
    cout << endl;
    
    return 0;
}

