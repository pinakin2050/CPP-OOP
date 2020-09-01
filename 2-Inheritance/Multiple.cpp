#include<iostream>
class Vehicle
{
public:
    Vehicle(){
        std::cout<<"This is a vehicle."<<std::endl;
    }
};

class FourWheeler
{
public:
    FourWheeler(){
        std::cout<<"This is a four wheeler."<<std::endl;
    }
};

class Car : public Vehicle,public FourWheeler
{
public:
    Car(){
        std::cout<<"This is a car."<<std::endl;
    }
};

int main()
{
    Car c;
    return 0;
}
