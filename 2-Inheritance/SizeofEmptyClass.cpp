#include<iostream>
class SizeofEmptyClass 
{	};

int main() {
	//Sizeof empty class is always one byte so that the objects of that class can have different addresses.
	std::cout << sizeof(SizeofEmptyClass);
	return 0;
}