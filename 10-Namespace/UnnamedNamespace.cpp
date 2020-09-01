#include<iostream>

namespace
{
    int val=300;
}

int main(){
    //First preference will be given to local variable so declaring val here will print 700
    //int val=700;
    std::cout<<"Value:"<<val;
    return 0;
}
