#include<iostream>

class Base2
{
protected:
    int x;
public:
    virtual void fun()=0;
    int getX(){return x;}
};

class Derived2:public Base2{};

int main()
{
    Derived2 d1;
    return 0;
}
