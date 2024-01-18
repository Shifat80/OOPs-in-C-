#include<iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout<<"class A"<<endl;
    }
};

class B
{
public:
    void show()
    {
        cout<<"class B"<<endl;
    }
};
class C: public A, public B
{

};
int main()
{
    C objc;
    //objc.show();
    objc.A::show();
    objc.B::show();
    return 0;
}
