#include<iostream>
class Vehicle
{
public:
    Vehicle()
    {
        std::cout<<"This is a vehicle."<<std::endl;
    }
};

class Car:public Vehicle
{
public:
    Car()
    {
        std::cout<<"This is a car."<<std::endl;
    }
};

class Bus:public Vehicle
{
public:
    Bus()
    {
        std::cout<<"This is a bus.";
    }
};

int main()
{
    Car c;
    Bus b;
    return 0;
}
