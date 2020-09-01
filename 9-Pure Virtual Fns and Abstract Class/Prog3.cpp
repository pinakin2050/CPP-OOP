#include<iostream>

class Base3
{
protected:
    int x;
public:
    virtual void fun()=0;
    Base3(int i){
        x=i;
    }
};

class Derived3:public Base3
{
    int y;
public:
    Derived3(int i,int j):Base3(i),y(j){}

    void fun(){
        std::cout<<"X="<<x<<", Y="<<y<<std::endl;
    }
};
int main()
{
    Derived3 d3(9,6);
    d3.fun();
    return 0;
}
