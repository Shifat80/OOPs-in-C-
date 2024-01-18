#include<iostream>
using namespace std;

class Student
{
protected:
    string name;
    int id;
public:
    void getData()
    {
        cout<<"Enter student information: "<<endl;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
    }
    void showData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
    }

};
class Course: public Student
{
private:
    int course_id;
public:
    void getData()
    {
        Student::getData();
        cout<<endl<<"Enter course information"<<endl;
        cout<<"Enter course id: ";
        cin>>course_id;
    }
    void showData()
    {
        Student::showData();
        cout<<"Course id: "<<course_id<<endl;
    }
};
int main()
{
    //Student s1;
    //s1.getData();
    //s1.showData();
    Course c1;
    c1.getData();
    c1.showData();
    return 0;
}
