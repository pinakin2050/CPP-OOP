#include<iostream>

class LocalObject
{
public:
    LocalObject(){
        std::cout<<"LocalObject Constructed."<<std::endl;
    }
    ~LocalObject(){
        std::cout<<"LocalObject Destroyed."<<std::endl;
    }
};

void myFunction()
{
    static LocalObject o1;
}

int main()
{
    std::cout<<"Main() started"<<std::endl;
    myFunction();
    std::cout<<"Main() terminated"<<std::endl;
    return 0;
}
