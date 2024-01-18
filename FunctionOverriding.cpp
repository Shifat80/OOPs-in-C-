#include<iostream>
using namespace std;

class Animal
{
public:
    void show()
    {
        cout<<"Animal"<<endl;
    }
};


class Bird : public Animal
{
public:
    void show()
    {
        cout<<"Bird"<<endl;
    }
};


class Fish : public Animal
{
public:
    void show()
    {
        cout<<"Fish"<<endl;
    }
};
int main()
{
    Bird b;
    Fish f;
    b.show();
    f.show();
    return 0;
}
