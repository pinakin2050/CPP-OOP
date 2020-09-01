#include<iostream>

class Test
{
    const int t;

public:
    Test(int i):t(i){}
    int getT(){return t;}
};

int main()
{
    Test o(7);
    std::cout<<o.getT();
    return 0;
}

