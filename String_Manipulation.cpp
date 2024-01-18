#include<iostream>
#include<cstring>
using namespace std;

class String
{
    char str[100];
public:
    String()
    {
        str[0]='\0';
    }
    String(char s[])
    {
        cout<<"Constructor invoked"<<endl;
        strcpy(str,s);
    }
    String(const String &a)
    {
        cout<<"Copy Constructor invoked"<<endl;
        strcpy(str,a.str);
    }
    void display()
    {
        cout<<str<<endl;
    }
    /*void concat(String s2)
    {
        if(strlen(str)+strlen(s2.str)<100)
            strcat(str,s2.str);
        else
            cout<<"\nString to long";
    }*/
    String concat(String s2)
    {
        String temp;
        strcpy(temp.str,str);
        if(strlen(temp.str)+strlen(s2.str)<100)
        {
            strcat(temp.str,s2.str);
            return temp.str;
        }
        else
        {
            cout<<"Too long"<<endl;
            return s2.str;
        }

    }
};

int main()
{
    String s1("Man");
    String s2 = "Beast";
    String s3=s1;
    //s1.display();
   // s2.display();
    //s3.display();
   // s3.display();
    s3 = s3.concat(s2);
    s3.display();
    return 0;

}
/*class part
{
private:
    char partname[30];
    int partnumber;
    double cost;
public:
    part()
    {
        strcpy(partname,"Orange");
        partnumber=0;
        cost=0.0;
    }
    part(char p[],int a,double b)
    {
        strcpy(partname,p);
        partnumber=a;
        cost=b;

    }
    void setPart(char pname[],int pn,double c)
    {
        strcpy(partname,pname);
        partnumber = pn;
        cost = c;
    }
    void showPart()
    {
        cout<<"Name = "<<partname<<endl;
        cout<<"Number = "<<partnumber<<endl;
        cout<<"Cost = "<<cost<<endl;
    }
};
int main()
{
    part part1,part2,part3("Blue",123,45.6);
    part1.showPart();
    part3.showPart();
    part1.setPart("a",443,214.6);
    part2.setPart("s",564,321.0);
    part1.showPart();
    part2.showPart();
    return 0;
}

int main()
{
    string s1("Man");
    string s2 = "Beast";
    string s3;

    s3 = s1;
    cout<<"s3 = "<<s3<<endl;

    s3= "Neither "+s1+" nor ";
    s3+=s2;
    cout<<"s3 = "<<s3<<endl;

    s1.swap(s2);
    cout<<s1<<" nor "<<s2<<endl;
    return 0;
}
*/
