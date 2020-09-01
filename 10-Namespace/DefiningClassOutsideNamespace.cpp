#include<iostream>
namespace ns
{
    class Class2;
}

class ns::Class2
{
public:
    void display(){
        std::cout<<"ns::Class2::display()"<<std::endl;
    }
};

int main(){
    ns::Class2 obj;
    obj.display();
    return 0;
}
