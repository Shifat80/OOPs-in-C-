#include<iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout<<"Animal Constructor called"<<endl;
    }
    ~Animal()
    {
        cout<<"Animal Destructor called"<<endl;
    }
};
class Dog : public Animal
{
public:
    Dog()
    {
        cout<<"Dog Constructor called"<<endl;
    }
    ~Dog()
    {
        cout<<"Dog Destructor called"<<endl;
    }
};
int main()
{
    Dog d;
    return 0;
}
