#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    class InchesEx
    {

    };
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int ft, float in)
    {
        if(in>=12.0)
            throw InchesEx();
        feet = ft;
        inches = in;
    }
    void getDist()
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
        if(inches >= 12.0)
            throw InchesEx();
    }
    void showdist()
    {
        cout<<feet<<" "<<inches<<endl;
    }
};
int main()
{
    try
    {
        Distance dist1(17,3.5);
        Distance dist2;
        dist2.getDist();
        cout<<"Dist1 = ";
        dist1.showdist();
        cout<<"Dist2 = ";
        dist2.showdist();
    }
    catch(Distance::InchesEx)
    {
        cout<<"Inches value is too large"<<endl;
    }
    return 0;
}
