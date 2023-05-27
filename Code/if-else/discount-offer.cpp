#include <iostream>
using namespace std;

int main()
{
    int amt;
    float discount;
    cout << "Discount Offer!\n";
    cout << "Enter bill amount: ";
    cin >> amt;
    if (amt < 100) { discount = 0; }
    else if (amt >= 100 && amt < 500) { discount = 0.1 * amt; }
    else if (amt >= 500) { discount = 0.2 * amt; }
    
    cout << "Bill amount : " << amt << endl;
    cout << "Discount : " << discount << endl;
    cout << "Final amount : " << amt-discount << endl;

}

