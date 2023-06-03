#include <iostream>
using namespace std;


class Demo 
{
private:
	int x=10;
public:
	void display() const
	{
		x++; //showing error because function doesn't allow changing values
	}
};

int main()
{
	cout << "Constant Qualifier";
	
	int const x = 10;
	const int* ptr = &x;

	x++; //showing error because x is consant 
	++*ptr; //showing error because ptr is consant 

	
} 

