#include<iostream>

using namespace std;

class One {
public:
	virtual void intro() {
		puts("I am One.");
	}
};

class Two : public One {
public:
	void intro() {
		puts("I am Two.");
	}
};

class Three : public One {
public:
	void intro() {
		puts("I am Three.");
	}
};

int main() {
	One *a;
	Two b;
	Three c;

	a = &b;
	a->intro();

	a = &c;
	a->intro();

	return 0;
}
