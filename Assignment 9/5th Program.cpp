#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Employee
{
	public:
		char name[20];
		int age;
		double salary;
		void entry()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,20);
		    cout<<"\nEnter age: ";
		    cin>>age;
		    cin.ignore();
		    cout<<"\nSalary: ";
		    cin>>salary;
		    salary+=salary*0.1;
		}
};
int main()
{
    char name[20]; int age; double salary;
    Employee ob;
    ofstream File("Details.txt");
    ob.entry();
    File<<ob.name<<endl<<ob.age<<endl<<ob.salary<<endl;
    File.close();
    return 0;
}
