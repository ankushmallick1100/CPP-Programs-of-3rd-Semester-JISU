#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
	void getdata(){
		cout<<"Real part:";
		cin>>a;
		cout<<"Imaginary part: ";
		cin>>b;
	}
	void showdata(){
	    cout<<a<<"+"<<b<<"i"<<endl;
	}
	complex(){
	}
	complex(int k){
		a=k;
		b=0;
	}
};
int main(){
	complex c;
	cout<<"Enter the value to get complex number-->\n";
	c.getdata();
	cout<<"Before convert: ";
	c.showdata();
	int x;
	cout<<"Enter the real part: ";
	cin>>x;
	c=x;
	cout<<"After convert: ";
	c.showdata();
	return 0;
}
