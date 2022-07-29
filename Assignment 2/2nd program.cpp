#include<iostream>
using namespace std;
class student
{
    char roll[20];
    char student_name[20];
    char grade;
    public:
    void data();
    void display();
};
void student::data()
{
    cout<<"  Enter the Student Roll Number :";
    cin>>roll;
    cout<<"  Enter the Student Name: ";
    cin>>student_name;
    cout<<"  Enter the grade: ";
    cin>>grade;
}
void  student::display()
{
    cout<<"Rollno is: "<<roll<<"\n";
    cout<<"Name is: "<<student_name<<"\n";
    cout<<"Grade : "<<grade<<"\n";
}

int main()
{
    student s[10];
    int n,i;
    cout<<"Enter the number of Students:";
    cin>>n;
    for(i=0;i<n;i++)
    s[i].data();
    for(i=0;i<n;i++)
    s[i].display();
   return 0;
}

