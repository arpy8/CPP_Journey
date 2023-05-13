#include <iostream>
using namespace std;

int main()
{
    cout << "Star pattern 1:\n\n";
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

    cout << "\nStar pattern 2:\n\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                cout << " ";
            }
            else
                cout << "*";
        }

        cout << endl;
    }

    cout << "\nStar pattern 3:\n\n";

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

    cout << "\nStar pattern 4:\n\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i + j > 4 - 1)
            {
                cout << " ";
            }
            else cout << "*";
        }

        cout << endl;
    }

}
