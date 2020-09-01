#include<iostream>

class Base1
{
protected:
    int x;
public:
    virtual void fun()=0;
    int getX(){return x;}
};

class Derived1:public Base1
{
public:
    void fun(){
        std::cout<<"Fun() executed.";
    }
};

int main()
{
    Derived1 d1;
    d1.fun();
    return 0;
}
