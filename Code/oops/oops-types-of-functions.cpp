#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length, breadth;
    public:
        //constructors
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);
        
        //mutators
        void setLength(int l);  
        void setBreadth(int b);
        
        //accessors
        int getLength();
        int getBreadth();


        //facilitators
        int area();
        int perimeter();

        //enquiry
        int isSquare();

        //destructor
        ~Rectangle();
};

int main()
{
    cout << "Types of functions";
}
