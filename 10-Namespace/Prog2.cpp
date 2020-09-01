#include<iostream>

namespace ns2
{
    int val(){
        return 100;
    }
}

namespace ns3
{
    const int x=9;
    int val(){
        return x*36;
    }
}

int main(){
    std::cout<<"ns2::val():"<<ns2::val()<<std::endl;
    std::cout<<"ns3::val():"<<ns3::val()<<std::endl;
    std::cout<<"ns3::x:"<<ns3::x<<std::endl;
    return 0;
}
