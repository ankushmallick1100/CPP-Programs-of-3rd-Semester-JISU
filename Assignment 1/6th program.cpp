#include<iostream>
#define pi 3.14
using namespace std;
class rec
  {
  	int l;
  	int b;
  	public:
  		void getdata();
  		void printarea();
    };
void rec::getdata()
    {
      cout<<"Enter the length: ";
      cin >> l;
      cout<<"Enter the breath: ";
      cin>>b;
    }

void rec::printarea()
    {
     int a;
     a=l*b;
     cout<<a;
    }
class circle
  {
  	int r;
  	 	public:
  		void getdata();
  		void printarea();
    };

void circle::getdata()
{
	cout<<"Enter the radious: ";
	cin>>r;
}
void circle::printarea(){
	int area;
	area=3.14*r*r;
	cout<<area;
}
int main()
  {
  	rec r;
  	circle c;
  	cout<<"FOR RECTANGLE--->";
  	cout<<"\n\n\n";
  	r.getdata();
  	cout<<"The area of rectangle is: ";
  	r.printarea();
  	cout<<"\n";
  	cout<<"\n\n\n";
  	cout<<"FOR CIRCLE--->";
  	cout<<"\n\n\n";
  	c.getdata();
  	cout<<"The area of circle is: ";
  	c.printarea();
     return 0;
  }
