#include <iostream>
#include<string>
using namespace std;

class Phone {
    string _name = "default";
    string _os = "default";
    int _price = 0;
    Phone(); // Default Constructor. Making it private to restrict ambiguous object declaration

public:
    Phone(const string& name, const string& os, const int& price); //Parameter Constructor
    Phone(const Phone&); // Copy Constructor
    string getName() { return _os; }
    ~Phone(); //Destructor
};

Phone::Phone() : _name(), _os(), _price(){
    puts("Default Constructor.");
}

Phone::Phone(const string& name, const string& os, const int& price) : _name(name), _os(os), _price(price) {
    puts("Parameter Constructor.");
}

Phone::Phone(const Phone& values) {
    puts("Overwrite Copy Constructor.");
    _name = "New-"+values._name;
    _os = "Skinned-" + values._os;
    _price = values._price;
}

Phone::~Phone(){
    cout << "Destructor called for " << _name << endl;
}

int main()
{
    /*Phone samsungA1;      //this is ambiguous declaration so restricting it by making default const private.
    cout << samsungA1.getName() << endl;*/

    Phone onePlus("OP7", "Android P", 20000);
    cout << onePlus.getName() << endl;

    Phone onePlus7s = onePlus;
    cout << onePlus7s.getName() << endl;

    return 0;
}
