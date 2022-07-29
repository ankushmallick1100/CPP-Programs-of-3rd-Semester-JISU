#include<iostream>
using namespace std;
class fibonacci{
	public:
    	int i,n,a=0,b=1;
	public:
		void getdata();
		void process();
};

void fibonacci::getdata(){
	cout<<"Enter the range: ";
	cin>>n;
	cout<<a<<"\n";
	cout<<b<<"\n";
}
void fibonacci::process(){
	    int sum;
		for(i=0;i<(n-2);i++){
		sum=a+b;
		cout<<sum;
	    cout<<"\t";
	    a=b;
	    b=sum;
	}
}
int main(){
	fibonacci f;
	f.getdata();
	f.process();
	return 0;
}

