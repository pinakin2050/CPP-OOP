#include<iostream>
class Circle
{
private:
    double radius;

public:
    double area(){
        return 3.14*radius*radius;
    }
};

int main()
{
    Circle obj;

    //Accessing class member outside the class. This will throw error.
    obj.radius=7.7;
    std::cout<<"Radius:"<<obj.radius<<std::endl;
    std::cout<<"Area:"<<obj.area();
    return 0;
}
