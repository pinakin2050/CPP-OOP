#include<iostream>

class A
{
private:
    int a;

public:
    A(){
        a=77;
    }

    friend void showA(A&);
};

void showA(A& x){
    std::cout<<"A::a="<<x.a;
}

int main()
{
    A a;
    showA(a);
    return 0;
}
