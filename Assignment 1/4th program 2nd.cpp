#include<iostream>
using namespace std;
class tribonacci{
	public:
    	int i,n,a=0,b=1,c=1;
	public:
		void getdata();
		void process();
};

void tribonacci::getdata(){
	cout<<"Enter the range: ";
	cin>>n;
	cout<<a<<"\t";
	cout<<b<<"\t";
	cout<<c<<"\t";
}
void tribonacci::process(){
	    int sum;
		for(i=0;i<(n-3);i++){
		sum=a+b+c;
		cout<<sum;
	    cout<<"\t";
	    a=b;
	    b=c;
	    c=sum;
	}
}
int main(){
	tribonacci t;
	t.getdata();
	t.process();
	return 0;
}
