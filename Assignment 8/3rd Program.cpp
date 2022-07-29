#include<iostream>
using namespace std;
void division(int a,int b){
	if(b==0){
		throw b;
	}
	else{
		float res= (float)a/b;
		cout<<"Reslt is: "<<res;
	}
}

int main(){
	int p,q;
	cout<<"Enter the 1st number: ";
	cin>>p;
	cout<<"Enter the 2nd number: ";
	cin>>q;
	try{
		division(p,q);
	}
	catch(int){
		cout<<"Giving infinity!";
	}
	return 0;
}
