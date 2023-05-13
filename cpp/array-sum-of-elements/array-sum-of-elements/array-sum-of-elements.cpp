#include <iostream>
using namespace std;

int main()
{
    int sum = 0, my_array[] = { 4,2,4,5,6,2,1,4,5,6,2,1,3,4,4,5,5 };
    for (int i: my_array) 
    {
        sum += i;
    }
    cout << "Sum of array is " << sum;
}
