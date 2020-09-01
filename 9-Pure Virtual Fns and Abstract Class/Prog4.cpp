#include<iostream>

class Base4 {
public:
	virtual void fun(int x = 0)
	{
		std::cout << "Base::Fun() X: " << x;
	}
};

class Derived4 : public Base4 {
	virtual void fun(int x = 10)
	{
		std::cout << "Derived::Fun() X: " << x;
	}
};

int main() {

	Derived4 d1;
	Base4* bptr = &d1;

	//This will print 0 bcz default arguments do not participate in signature. So signature of Fun() in base and Derived 
	//class are considered the same. Also, the default value is substituted at the compile time.
	bptr->fun();
	return 0;
}