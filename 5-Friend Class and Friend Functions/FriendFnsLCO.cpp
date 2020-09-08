#include<iostream>
#include<string>

using namespace std;

class Superhero {
	string _name;
	int _age;
	Superhero();

protected:
	Superhero(string& name, int age) : _name(name), _age(age){}
	void run() { cout << "I can run." << endl; }

public:
	void sayName();

	friend class Superman;
	friend class Spiderman;
};

void Superhero::sayName() {
	cout << "My name is " << _name << endl;
}

class Superman : public Superhero {
	bool _fly = true;

public:
	Superman(string name) : Superhero(name,25){}

	void run() { cout << "I can run at light speed." << endl; }

	void sayAge() { cout << "My age is " << _age << endl; } //_age won't be accessible until make this class friend of Superhero.
};

class Spiderman : public Superhero {
	bool _webbing = true;

public:
	Spiderman(string name) : Superhero(name, 19) {}

	void run() { cout << "I can run at normal speed." << endl; }

	void sayAge() { cout << "My age is " << _age << endl; }
};

int main() {
	Superman kent("Clark");
	kent.sayName();
	kent.sayAge();
	kent.run();

	Spiderman parker("Peter");
	parker.sayName();
	parker.sayAge();
	parker.run();

	return 0;
}
