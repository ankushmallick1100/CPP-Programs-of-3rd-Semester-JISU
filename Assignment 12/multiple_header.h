using namespace std;
#include<iostream>
class person
{
    public:
    int number;
    void getdata();
    void showdata();
};
void person :: getdata()
{
    cout<<"\n Enter the total number of person(staff) in Jis University: ";
    cin>>number;
}
void person :: showdata()
{
   cout<<"\n The number of person in Jis University : "<<number;
}
class Employee
{
    public:
    int num1;
    void getdata();
    void showdata();
};
void Employee :: getdata()
{
    cout<<"\n Enter the Employee numbers in Jis University : ";
    cin>>num1;
}
void Employee :: showdata()
{
    cout<<"\n The number of Employees in Jis University : "<<num1;
}
class Teacher : public person, public Employee
{
    public:
    void showdata()
    {
        person::getdata();
        person::showdata();
        Employee::getdata();
        Employee::showdata();
        cout<<"\n The numbers of total teacher in JIS University : "<<(number - num1);
    }
};