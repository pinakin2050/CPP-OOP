#include<iostream>
class FunctionOverloading
{
public:
    void fns(char x)
    {
        std::cout<<"Value of X is "<<x<<std::endl;
    }
    void fns(double x)
    {
        std::cout<<"Value of X is "<<x<<std::endl;
    }
    void fns(int x=0,int y=0)
    {
        std::cout<<"Value of X & Y is "<<x<<" "<<y<<std::endl;
    }
};

int main()
{
    FunctionOverloading o;
    o.fns('A');
    o.fns(7.7);
    o.fns(9,4);
    return 0;
}
