#include<iostream>
class E1
{
    int i;
public:
    E1(int i):i(i){} //this pointer can also be used
    int getI(){return i;}
};

int main()
{
    E1 objE1(693);
    std::cout<<"i:"<<objE1.getI();
    return 0;
}
