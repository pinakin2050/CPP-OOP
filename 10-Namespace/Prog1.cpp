#include<iostream>
namespace ns1
{
    int val=500;
}

int val=100;

int main(){
    int val=50;
    std::cout<<ns1::val;
    return 0;
}
