#include <iostream>
using namespace std;

//simple inheritance
class A {};
class B : public A {};

//heirarchical inheritance
class A {};
class B : public A {};
class C : public A {};

//multilevel inheritance
class A {};
class B : public A {};
class C : public B {};

//multiple inheritance
class A {};
class B {};
class C : public B, public C {};

//hybrid inheritance
class A {};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};


int main()
{
    cout << "Types of inheritance";
}
