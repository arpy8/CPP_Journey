#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = { 10,20,30,40,50 };
    v.push_back(20);
    v.push_back(30);

    vector<int>::iterator itr;

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

