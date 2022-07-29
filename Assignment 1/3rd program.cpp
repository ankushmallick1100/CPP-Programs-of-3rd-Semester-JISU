#include<iostream>
using namespace std;
class swapop
  {
  	public:
  	int a,b,c;
     public:
         void getdata();
         void swaping();
    };

void swapop::getdata()
    {
      cout << "Enter 1st number: " ;
      cin >> a;
      cout << "Enter 2nd number: " ;
      cin >>b;
	  cout<<"\n\n";
	  cout<<"Before swaping--->"<<"\n";
	  cout<<" 1st number is: "<<a<<"\n";
	   cout<<" 2nd number is: "<<b<<"\n";
	   cout<<"\n\n";
    }

void swapop::swaping()
    {
    c=a;
    a=b;
    b=c;
    cout<<"After swaping-->"<<"\n";
    cout<<"The 1st number is: "<<a<<"\n";
    cout<<"The 2nd number is: "<<b;
    }


int main()
  {
    swapop s;
  	s.getdata();
  	s.swaping();
     return 0;
  }
