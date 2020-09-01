#include<iostream>

namespace ns
{
    class Class1
    {
    public:
        void display(){
            std::cout<<"ns::Class1::display()"<<std::endl;
        }
    };
}

int main(){
    ns::Class1 obj;
    obj.display();
    return 0;
}
