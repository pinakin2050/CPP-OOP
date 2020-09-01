#include<iostream>
class Test
{
    int &t;

public:
    Test(int &x):t(x){}
    int getT(){
        return t;
    }
};

int main()
{
    int x=77;
    Test o(x);
    std::cout<<o.getT()<<std::endl;
    x=369;
    std::cout<<o.getT()<<std::endl;
    return 0;
}
