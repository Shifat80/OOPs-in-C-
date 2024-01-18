#include<iostream>
using namespace std;

class Institution
{
protected:
    int num_of_buildings;
public:
    Institution()
    {
        num_of_buildings = 0;
    }
    Institution(int a)
    {
        num_of_buildings = a;
    }
    void getData()
    {
        cout<<"Enter number of buildings: ";
        cin>>num_of_buildings;
    }
    void putData()
    {
        cout<<"Number of buildings: "<<num_of_buildings<<endl;
    }
};
class Department
{
protected:
    string dept_name;
    string dept_location;
public:
    Department()
    {
        dept_name = "N/A";
        dept_location = "N/A";
    }
    Department(string a, string b)
    {
        dept_name = a;
        dept_location = b;
    }
    void getData()
    {
        cout<<"Enter department name: ";
        cin>>dept_name;
        cout<<"Enter location: ";
        cin>>dept_location;
    }
    void putData()
    {
        cout<<"Department name: "<<dept_name<<endl;
        cout<<"Department location: "<<dept_location<<endl;
    }
};
class Student: public Institution, public Department
{
private:
    string Stu_name;
    int id;
public:
    Student()
    {
        Stu_name = "N/A";
        id = 0;
    }
    Student(int c,string p,string q,string a,int b): Institution(c),Department(p,q)
    {
        //num_of_buildings = c;
        //dept_name = p;
        //dept_location = q;
        Stu_name = a;
        id = b;
    }
    void getData()
    {
        Institution::getData();
        Department::getData();
        cout<<"Enter student name: ";
        cin>>Stu_name;
        cout<<"Enter id: ";
        cin>>id;
    }
    void putData()
    {
        Institution::putData();
        Department::putData();
        cout<<"Student name: "<<Stu_name<<endl;
        cout<<"Id: "<<id<<endl;
    }
};
int main()
{
    Student s1(1,"a","b","c",1);
    //s1.getData();
    s1.putData();

    return 0;
}

