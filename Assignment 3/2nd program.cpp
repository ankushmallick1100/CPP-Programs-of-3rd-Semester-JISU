#include<iostream>
using namespace std;
class sum{
	public:
	    int a,b,s;
	public:
		sum(int,int);
		sum(void);
		void printdata();
};

sum::sum(int x,int y){
	a=x;
	b=y;
	s=a+b;
}

sum::sum(void){                                         
	int o,k;
	cout<<"Non parameterized constructor first number: ";
	cin>>o;
	cout<<"Non parameterized constructor second number: ";
	cin>>k;
	a=o;
	b=k;
	s=o+k;
}

void sum::printdata(){
	cout<<"The sum is: ";
	cout<<s;
}

int main(){
	int p,q;
	cout<<"The first number: ";
	cin>>p;
	cout<<"The second number: ";
	cin>>q;
	sum s(p,q);
	sum r;
	s.printdata();
	cout<<"\n";
	r.printdata();
	return 0;
}
