#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    void getdist()
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
    }
    void showdist()
    {
        cout<<"Feet: "<<feet<<" "<<"Inches: "<<inches<<endl;
    }
};

int main()
{
    Distance dist;
    dist.getdist();
    dist.showdist();

    Distance* disptr;
    disptr = new Distance;
    disptr->getdist();
    //disptr.getdist();
    disptr->showdist();
   // disptr.showdist();
   delete disptr;
    return 0;
}
