#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter current hour: ";
    cin >> time;
    if (time >=9 && time<=18) { cout << "Working hour."; }
    else { cout << "Leisure time."; }

}

