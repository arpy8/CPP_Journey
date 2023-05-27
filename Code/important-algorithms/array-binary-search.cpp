#include <iostream>
using namespace std;

int main()
{
    int num, l=0, h=9, mid, A[] = { 12,23,34,45,54,62,73,85,96,99 };
    for (int i=0;i<10;i++)
    {
        cout << A[i] << " ";
    }
    cout << "\nEnter a number: ";
    cin >> num;

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (num == A[mid])
        {
            cout << "Found at: " << mid;
            return 0;
        }

        else if (num < A[mid])
            h = mid - 1;

        else
            l = mid + 1;
    }
    cout << "Element not found."; 
}
