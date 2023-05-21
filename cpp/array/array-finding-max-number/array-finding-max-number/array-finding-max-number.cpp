#include <iostream>
using namespace std;

int main()
{
    int my_array[] = { 99,4,2,4,5,6,2,1,4,5,6,2,1,3,4,4,5,5 };
    int max = my_array[0];
    for (int i : my_array)
    {
        if (max < i) 
            max = i;
    }
    cout << "Maximum number is " << max;
}
