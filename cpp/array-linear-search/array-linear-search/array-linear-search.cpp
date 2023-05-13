#include <iostream>
using namespace std;

int main()
{
    int num, A[] = { 4,2,4,5,6,2,1,4,5,6,2,1,3,4,4,5,5 };
    for (int i : A)
    {
        cout << A[i] << " ";
    }
    cout << "\nEnter a number: ";
    cin >> num;

    for (int i : A)
    {
        if (A[i] == num)    
            cout << "Indexed at: " << i;
        else cout << "Element not found"; break;
    } 

}
        