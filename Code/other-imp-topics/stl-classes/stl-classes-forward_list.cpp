#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> v = { 10,20,30,40,50 };
    v.push_front(20);
    v.push_front(30);

    forward_list<int>::iterator itr;

    cout << "Using iterator" << endl;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << ++ * itr << endl;
    }

    cout << endl << "Using for each loop" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }
}

