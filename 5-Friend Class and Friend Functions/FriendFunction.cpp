#include<iostream>

class B;

class A
{
public:
    void showB(B&);
};

class B
{
    int b;
public:
    B(){
        b=7;
    }

    friend void A::showB(B&);
};
void A::showB(B &x)
{
    std::cout<<"B::b="<<x.b;
}

int main()
{
    A a;
    B b;
    a.showB(b);
    return 0;
}
