#include<iostream>
using namespace std;

class AClass
{
public:
    class AnError
    {

    };
    void Func()
    {
        if(/* error condition */)
            throw AnError();
    }
};
int main()
{
    try
    {
        AClass obj1;
        obj1.Func();
    }
    catch(AClass::AnError)
    {
        //tell user about error, etc
    }
    return 0;
}
