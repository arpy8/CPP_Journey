#include <iostream>
using namespace std;

class Base
{
public:
	void display()
	{
		cout << "Display of Base" << endl;
	}
};

class Derived : public Base
{
public:
	void show()
	{
		cout << "Show of Derived" << endl;
	}
};

int main()
{
	Derived b;
	b.display();
	b.show();
}