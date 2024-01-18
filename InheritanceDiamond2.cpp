#include<iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout<<"Class A"<<endl;
    }
};
class B:virtual public A
{

};
class C:virtual public A
{

};
class D:public B,public C
{

};
int main()
{
    D objD;
    objD.func();
    return 0;
}
