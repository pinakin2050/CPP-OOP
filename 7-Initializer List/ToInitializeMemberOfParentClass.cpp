#include<iostream>

class D1
{
    int i;
public:
    D1(int a){
        i=a;
        std::cout<<"D1's Constructor called:Value of i:"<<i<<std::endl;
    }
};

class D2:public D1
{
public:
    D2(int b):D1(b){
        std::cout<<"D2's Constructor called.";
    }
};

int main()
{
    D2 objD2(963);
    return 0;
}
