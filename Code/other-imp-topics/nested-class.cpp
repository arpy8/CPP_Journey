#include <iostream>
using namespace std;

class Outer 
{
public:
    void fun() { i.display(); }
    class Inner

    {
    private:
        int secret_key = 347289;
    public:
        void display(){ cout << secret_key; }
    };
    
    Inner i;
};

int main()
{
    Outer o;
    o.fun();
}
