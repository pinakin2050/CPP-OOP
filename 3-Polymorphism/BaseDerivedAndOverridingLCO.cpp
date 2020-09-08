#include <iostream>
#include<string>
using namespace std;

class Superhero {
	string _name;
	int _age;
	Superhero(); // making it private so that nobody can create obj of Base class.

protected:
	Superhero(string& name, int age) : _name(name), _age(age){}
	
	void run() {cout << "I can run." << endl;}

public:
	void sayName();
};

void Superhero::sayName() {
	cout << "My name is " << _name << " and age is " << _age << endl;
}

class Superman : public Superhero {
	bool fly=true;
public:
	Superman(string name) : Superhero(name, 25){} // Using parent class's constructor.
	void run() { cout << "I can run at light speed." << endl; } //Overriding the method of base class.
};

class Spiderman : public Superhero {
	bool webbing = true;
public:
	Spiderman(string name) : Superhero(name, 19) {} // Using parent class's constructor.
	void run() { cout << "I can run at normal speed." << endl; } //Overriding the method of base class.
};

int main() {
	Superman clark("Kent");
	clark.sayName();
	clark.run();

	Spiderman parker("Peter");
	parker.sayName();
	parker.run();

	return 0;
}