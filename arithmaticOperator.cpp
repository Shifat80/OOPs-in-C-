#include<iostream>
using namespace std;

class Student
{
    int marks;
public:
    Student()
    {
        marks = 0;
    }
    Student(int s)
    {
        marks = s;
    }
    Student operator + (Student s2)
    {
        // Student s1;
        // s1.marks = marks+s2.marks;
        // return s1;

        return Student(s2.marks + marks);
    }
    Student operator - (Student s2)
    {
        Student s1;
        s1.marks = marks-s2.marks;
        return s1;
    }
    // void operator -(Student s2){
    //     marks=marks-s2.marks;
    // }
    // void operator + (Student s2)
    // {
    //     marks = marks+s2.marks;
    // }
    void display()
    {
        cout<<"Total marks: "<<marks<<endl;
    }
};

int main()
{
    Student s1 = 10,s2(20),s3(5),s4=40,s5(2);
    s1=s1+s2+s4-s3+s5;
    s1.display();
    s3 = s2+s4;
   s3.display();
   s3 = s1+s2+s4;
    s3.display();
    return 0;
}
