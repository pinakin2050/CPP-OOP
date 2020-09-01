#include<iostream>

class Base
{
public:
    Base(){
        std::cout<<"Base class Constructed."<<std::endl;
    }
    virtual ~Base(){    //Making it virtual solves the problem.
        std::cout<<"Base class destructed."<<std::endl;
    }
};

class Derived:public Base
{
public:
    Derived(){
        std::cout<<"Derived class Constructed."<<std::endl;
    }
    ~Derived(){
        std::cout<<"Derived class destructed."<<std::endl;
    }
};

int main()
{
    Derived *d=new Derived;
    Base *b=d;
    delete b;
    return 0;
}
