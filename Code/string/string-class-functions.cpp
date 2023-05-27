#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << endl << "length/size : " << str.length() << endl;
    //cout << "size : " << str.size() << endl;
    cout << "capacity : " << str.capacity() << endl;
    //cout << "resize: " << str.resize(20) << endl;
    cout << "max size : " << str.max_size() << endl;
    //cout << "clear : " << str.clear() << endl;
    cout << "empty : " << str.empty() << endl;
}

