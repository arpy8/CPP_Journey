#include <iostream>
using namespace std;

void main()
{
    //1
    []() { cout << "Lambda Function" << endl; }();

    //2
    int a = 10, b = 12;
    [a, b]() {cout << a << " " << b << endl; }();

    //3
    cout << ([]() {return 40; }()) << endl;
 
    //4
    auto max = [](int x, int y) {cout << "max is " << (x > y ? x : y) << endl; };
    max(5, 10);
}