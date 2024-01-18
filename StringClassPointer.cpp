#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    char* str;
public:
    String()
    {
        str = new char[0];
        strcpy(str,"1");
    }
    String(char* s)
    {
        int length = strlen(s);
        str = new char[length+1];
        strcpy(str,s);
    }
    ~String()
    {
        cout<<"Deleting str"<<endl;
        delete[] str;
    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    String s1 = "Who knows nothing doubts nothing", s2= "Nothing to do", s3;
    s1.display();
    s3 = s2;
    s3.display();
    return 0;
}
