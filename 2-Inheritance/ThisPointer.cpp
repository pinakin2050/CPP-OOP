#include <iostream>
#include<string>
using namespace std;

class Rectangle {
	double _length;
	double _breadth;

public:
	Rectangle(double l = 0.0, double b = 0.0) {
		_length = l;
		_breadth = b;
	}

	double area() {
		return _length * _breadth;
	}

	int compare(Rectangle rectangle) {
		return this->area() > rectangle.area(); //Using this to refer to calling object's area fns.
	}
};

int main() {
	Rectangle r1(3.0, 5.0);
	Rectangle r2(5.5, 6.3);

	if(r1.compare(r2)) {
		cout << "R1 is biggger." << endl;
	} else {
		cout << "R2 is biggger." << endl;
	}

	return 0;
}
