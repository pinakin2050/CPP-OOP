#include<iostream>
class Base
{
public:
    virtual void print(){
        std::cout<<"print of base class."<<std::endl;
    }

    void show(){
        std::cout<<"Show of base class."<<std::endl;
    }
};

class Derived:public Base
{
    void print(){
        std::cout<<"print of derived class."<<std::endl;
    }

    void show(){
        std::cout<<"Show of derived class."<<std::endl;
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr=&d;
    bptr->print();
    bptr->show();
    return 0;
}
