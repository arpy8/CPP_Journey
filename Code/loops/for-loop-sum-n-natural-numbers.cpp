#include <iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cout << "Enter number: ";
    cin >> num;

    for (int i=1;num>=i;i++)
    {
        sum += i;
    }
    
    cout << "Sum is " << sum << endl;
    
    return 0;

}

