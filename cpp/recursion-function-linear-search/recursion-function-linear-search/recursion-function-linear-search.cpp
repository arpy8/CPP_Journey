#include <iostream>
using namespace std;

int Search(int A[], int len, int key)
{
    for (int i = 0; i <= len; i++)
    {
        if (A[i] == key)
            return i;
        else return -1;
    }
    return 0;
}

int main()
{
    int input, A[]  = { 2,4,6,8,10,12,14,16,18,20 };
    cout << "Enter a key: ";
    cin >> input;
    cout << "Element found at index : " << Search(A, 10, input);
}
