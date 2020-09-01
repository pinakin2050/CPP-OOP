#include<iostream>

class C1
{
    int i;
public:
    C1(int a){
            i=a;
            std::cout<<"C1's Constructor called: Value of i:"<<i<<std::endl;
        }
};

class C2
{
    C1 objC1;
public:
    C2(int b):objC1(b){
        std::cout<<"C2's Constructor called."<<std::endl;
    }
};

int main()
{
    C2 objC2(396);
    return 0;
}
