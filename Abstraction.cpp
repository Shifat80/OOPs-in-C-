#include<iostream>
using namespace std;

class Base
{
public:

    virtual void show()=0;
};
class Derv1: public Base
{
public:

    void show()
    {
        cout<<"Derv1\n";
    }
};
class Derv2: public Base
{
public:

    void show()
    {
        cout<<"Derv2\n";
    }
};
int main()
{
    //Base b;
    Base* b;
    Derv1 dv1;
    Derv2 dv2;
    b = &dv1;
    b->show();

    b = &dv2;
    b->show();
}
