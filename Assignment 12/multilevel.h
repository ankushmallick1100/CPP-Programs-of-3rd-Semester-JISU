using namespace std;
#include<iostream>
#include<string.h>
class person
{
    
    public:
    char name[7][15];   
};
class Teacher: public person
{
    public:
    int i,n;
    void getdata()
    {
        cout<<"\n Enter the number of teacher: ";
        cin>>n;
        cout<<"\n Enter the teacher name: ";
        for(i=0;i<n;i++)
       // gets(name[i]);
       {
           cin.ignore();
           cin.getline(name[i],15);
       }
    }
};
class Employee: public Teacher
{
    public:
    int n1,j;
    void getdata1()
    {
        cout<<"\n Enter the number of Employee: ";
        cin>>n1;
        cout<<"\n Enter the name of Employee: ";
        for(j=i;j<(i+n1);j++)
        {
            cin.ignore();
            cin.getline(name[j],15);
        }
    }
    void showdata()
    {
        cout<<"\n The faculty names are : "<<endl;
        for(j=0;j<(n+n1);j++)
        {
            puts(name[j]);
            //cout<<endl;
        }
    }
};