#include<iostream>

class A
{
    int x;
public:
    A(){
        std::cout<<"Constructor of class A."<<std::endl;
    }
};

class B
{
    static A a;
public:
    B(){
        std::cout<<"Constructor of class B."<<std::endl;
    }
    static A getA(){
        return a; // Using a without explicitly defining it
    }
};

// A B::a;  This explicit declaration will solve the error.

int main()
{
    B b;
    A a=b.getA(); //This line will throw error.
    return 0;
}
