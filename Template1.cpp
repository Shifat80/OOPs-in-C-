#include<iostream>
using namespace std;

template <class T>
T abs(T n)
{
    return (n<0)?-n:n;
}
int main()
{
    int int1 = 5;
    int int2 = -6;
    double dub1 = 9.95;
    double dub2 = -10.15;

    cout<<"abs of int1: "<<abs(int1)<<endl;
    cout<<"abs of int2: "<<abs(int2)<<endl;
    cout<<"abs of lon1: "<<abs(dub1)<<endl;
    cout<<"abs of lon2: "<<abs(dub2)<<endl;

    return 0;
}
