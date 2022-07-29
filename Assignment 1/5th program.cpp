#include<iostream>
using namespace std;
class factorial
  { 
  public:
  	int n;
  	int p=1;
  	public:
  		void getdata();
  		void fact();
  };

void factorial::getdata()
    {
      cout << "Enter the number: " ;
      cin >>n;
    }

void factorial::fact()
    {
      int i;
      for(i=1;i<=n;i++){
      	p=p*i;
	  }
	  cout<<"The factorial of this number is: ";
	  cout<<p;
    }


int main()
  {
  	factorial f;
  	f.getdata();
  	f.fact();
    return 0;
  }
