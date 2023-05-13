#include <iostream>
using namespace std;

int main() {

    cout << "\nStar pattern 5:\n\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i + j > 4 - 1)
            {
                cout << "*";
            }
            else cout << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

}