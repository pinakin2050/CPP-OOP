#include<iostream>

class Point
{
private:
    int x,y;
public:
    Point(int i=0,int j=0):x(i),y(j){}

    void print(){
        std::cout<<"(X,Y)=("<<x<<","<<y<<")";
    }
};

int main()
{
    Point p(10,20);
    p.print();
    return 0;
}
