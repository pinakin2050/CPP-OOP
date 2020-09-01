#include<iostream>

class A
{
public:
    A(){
        std::cout<<"Constructor of class A."<<std::endl;
    }
};

class B
{
    static A a;
public:
    B(){
        std::cout<<"Constructor of class B."<<std::endl;
    }
};

int main()
{
    B b;
    return 0;
}
