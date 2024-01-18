#include<iostream>
using namespace std;

template <class T>
T Swap(T a,T b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    double c = 9.5, d = 8.5;
    cout<<"After swapping: ";
    Swap(a,b);
    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;
    Swap(c,d);
    cout<<"c:"<<c<<" "<<"d:"<<d<<endl;
    return 0;
}
