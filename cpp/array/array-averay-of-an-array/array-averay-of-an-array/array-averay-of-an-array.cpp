#include <iostream>
using namespace std;

int main()
{
    int A[100], n, i;
    float avg=0.0, sum=0.0;
    cout << "Enter number of elements: ";
    cin >> n;
    
    for (i = 0; i<n ; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> A[i];
        sum += A[i];
    }
    avg = sum / n;
    cout << "Average is " << avg;
}

