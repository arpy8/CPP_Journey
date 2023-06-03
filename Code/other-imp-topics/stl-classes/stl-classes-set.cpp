#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> v = { 10,20,30,40,50 };
    v.insert(20);
    v.insert(30);

    set<int>::iterator itr;

    cout << "Using iterator" << endl;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << endl << "Using for each loop" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }
}

