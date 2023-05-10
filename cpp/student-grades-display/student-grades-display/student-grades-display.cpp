#include <iostream>
using namespace std;
typedef int marks;

int main()
{
    marks m1, m2, m3, total;
    float avg;
    cout << "Enter marks in sub1: ";
    cin >> m1;
    cout << "Enter marks in sub2: ";
    cin >> m2;
    cout << "Enter marks in sub3: ";
    cin >> m3;
    
    avg = (m1 + m2 + m3) / 3;
    
    if (avg >= 60) { cout << "A"; }
    else if (avg >= 35 && avg < 60) { cout << "B"; }
    else { cout << "C"; }
        
    return 0;
}

