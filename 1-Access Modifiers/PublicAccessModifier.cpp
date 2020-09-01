#include<iostream>
class Circle
{
public:
    double radius;

    double area(){
        return 3.14*radius*radius;
    }
};

int main()
{
    Circle obj;

    //Accessing class member outside the class
    obj.radius=7.7;
    std::cout<<"Radius:"<<obj.radius<<std::endl;
    std::cout<<"Area:"<<obj.area();
    return 0;
}
