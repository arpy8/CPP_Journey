#include <iostream>
using namespace std;

class Complex
{
public:
    int real, img;
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real+x.real;
        temp.img = img+x.img;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3; 
    c1.real = 5; c1.img = 3;
    c2.real = 10; c2.img = 5;

    c3 = c1+c2;
    cout << c3.real << "+i" << c3.img << endl;
}

