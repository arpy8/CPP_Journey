#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    
    s1 = "ABCD";
    s2 = "1234";
    
    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl << endl;

    cout << "Replace : " << s1.replace(2,3, s2) << endl;
    cout << "Insert : " <<  s1.insert(1, s2) << endl;
    cout << "Append : " << s1.append(s2) << endl;
    s1.push_back('Z');
    cout << "Push back : " <<  s1 << endl;
    s1.pop_back();
    cout << "Pop back : " << s1 << endl;
    s1.swap(s2);
    cout << "Swap : " << s1 << endl;


    return 0;
}
