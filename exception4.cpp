#include<iostream>

using namespace std;

int main()
{
    string number;
    try
    {
        cin>>number;
        int flag=1,i;
        for(i=0; i<number.length(); i++)
        {
            if(!isdigit(number[i]))
            {
                flag=0;
                throw number;
            }

            else
                flag=1;
        }
        if(flag==1)
        {
            cout<<"Numeric value"<<endl;
        }
    }
    catch(string a)
    {
        cout<<"Non numeric value"<<endl;
    }

        return 0;
    }
