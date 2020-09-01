#include<iostream>

class A
{
private:
    int x;

public:
    A(){
       x=0;
    }
    friend class B;
};

class B
{
public:
    void getA(A &a){
        std::cout<<"Value of X:"<<a.x<<std::endl;
    }
};

int main()
{
    A a;
    B b;
    b.getA(a);
    return 0;
}
