#include<iostream>
#include "HeaderNamespace.h"

int main()
{
    ns::a=7;
    std::cout<<ns::getA();
    return 0;
}
