#include<iostream>
class Complex
{
private:
    int real,img;
public:
    Complex(int r=0,int i=0) {real=r; img=i;}

    Complex operator+(Complex const &obj){
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }

    void print(){
        std::cout<<real<<"+i"<<img;
        }
};

int main()
{
    Complex c1(9,4),c2(3,6);
    Complex c3=c1+c2;
    c3.print();
    return 0;
}
