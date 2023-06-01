#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 12, c;
    
    try 
    { 
        if (b == 0) 
        { 
            throw 1; 
        }
        c = a / b;
        cout << c << endl;
    }
    catch (int e) 
    { 
        cout << "Denominator is 0"<<endl; 
    }
    
    cout << "Bye";

}
