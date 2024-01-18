#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Before try"<<endl;
    try
    {
        cout <<"Inside try"<<endl;
        cout<<"Enter age: ";
        cin>>age;
        if (age >= 0)
        {
            cout<<"Proper Age"<<endl;
        }
        else
        {
            throw age;
        }
        cout << "After throw (Never executed)"<<endl;
    }
    catch (int age)
    {
        cout <<"Wrong age input"<<endl<<"Exception Caught"<<endl;
    }

    return 0;
}
