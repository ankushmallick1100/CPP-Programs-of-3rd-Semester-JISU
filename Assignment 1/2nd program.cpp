#include<iostream>
using namespace std;
class emp
  {
  	public:
     float basic,DA,IT,net;
     public:
         void getdata();
         void netsalary();
    };

void emp::getdata()
    {
      cout << "Enter employee basic salary in Rs: " ;
      cin >> basic;
    }

void emp::netsalary()
    {
      DA=((0.52)*basic );
      float gsal=DA+basic;
      IT=((0.3)*gsal);
      net=gsal-IT;
      cout<<net;
    }


int main()
  {
  	int n;
  	int i;
     cout<<"\nCalculation of Employee Net Salary"<<"\n"<<"\n"<<"\n Enter the number of employees:";
     cin>>n;
	 emp ob[n];
     for(i=0;i<n;i++)
         {
            ob[i].getdata();
            ob[i].netsalary();
         }
    
     return 0;
  }
