#include<iostream>
using namespace std;

class A
{
public:
    int x;
protected:
    int y;
private:
    int z;
};
class B: public A
{
    //x is public
public:
    int getX()
    {
        x = 0;
        return x;
    }
    //y is protected
    int getY()
    {
        y = 0;
        return y;
    }
    //z is not accessible from B
   /*int getZ()
    {
        z = 0;
        return z;
    }*/
};
class C: protected A
{
    //x is protected
    //y is protected
    //z is not accessible from c
};
class D: private A
{
    //x is private
    //y is private
    //z is not accessible from D
};
int main()
{
    B b;
    cout<<b.x<<endl;
   // cout<<b.y<<endl;
  //  cout<<b.z<<endl;
   // cout<<b.getX()<<endl;
   // cout<<b.getY()<<endl;
   // cout<<b.getZ()<<endl;
    return 0;
}
