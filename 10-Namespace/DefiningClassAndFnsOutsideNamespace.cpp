#include<iostream>
namespace ns
{
    void display();
    class Class3;
}
void ns::display(){
    std::cout<<"ns::display()"<<std::endl;
}

class ns::Class3
{
public:
    void display(){
        std::cout<<"ns::Class3::display()"<<std::endl;
    }
};

int main(){
    ns::display();
    ns::Class3 obj;
    obj.display();
    return 0;
}
