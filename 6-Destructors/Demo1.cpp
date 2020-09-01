#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    char *s;
    int size;
public:
    String(char *);
    ~String();

    void print(){
        cout<<"String:"<<s;
    }
};

String::String(char *c)
{
    size=strlen(c);
    s=new char(size+1);
    strcpy(s,c);
}

String::~String()
{
    delete []s;
}

int main()
{

    String s1("Aishani");
    s1.print();
    return 0;
}
