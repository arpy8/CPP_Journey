#include <iostream>
using namespace std;

class Parent 
{
public:
    void display() { cout << "Parent class display"; }
};

class Child : public Parent 
{
public:
    void display() { cout << "Child class display"; } 

};

int main()
{
    Child obj;
    obj.display();
}
