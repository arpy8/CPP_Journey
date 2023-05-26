#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public: 
    
    // non parameterized constructor 
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // parameterized constructor 
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    
    // copy constructor 
    Rectangle(Rectangle(&rect))
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setLength(int l)
    {
        length = l;
    }
    
    void setBreadth(int b)
    {
        length = b;
    }

};

int main()
{
    return 0; 
}
