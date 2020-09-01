#include<iostream>

class GlobalObject
{
public:
    GlobalObject(){
        std::cout<<"GlobalObject constructed."<<std::endl;
    }
    ~GlobalObject(){
        std::cout<<"GlobalObject destroyed."<<std::endl;
    }
};

static GlobalObject obj;

int main()
{
    std::cout<<"Main() started."<<std::endl;
    std::cout<<"Main() terminated."<<std::endl;
    return 0;
}
