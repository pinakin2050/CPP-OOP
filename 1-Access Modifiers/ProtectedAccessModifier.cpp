#include<iostream>
class Parent
{
protected:
    int radius;
};

class Child : public Parent
{
protected:
    double area;

public:
    void compute_area(int r){
        radius=r;
        area=3.14*radius*radius;
        std::cout<<"Area:"<<area;

    }
};

int main()
{
    Parent o1;
    Child o2;
    /*Accessing class member outside the class. This will throw error.
    o1.radius=7.7;
    o2.radius
    */
    o2.compute_area(7);
    return 0;
}
