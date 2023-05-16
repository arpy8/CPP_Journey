#include <iostream>
using namespace std;

int main()
{
    cout << "Reference Variable\n";
    int x = 10;
    int& y = x;
    x++;
    y++;
    cout << y << endl;
    cout << "We can see that the number increased by 2. "

}
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
