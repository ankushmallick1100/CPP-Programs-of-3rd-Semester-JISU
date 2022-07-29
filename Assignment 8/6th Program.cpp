#include<iostream>
using namespace std;
void division(int a,int b){
	try{
	
	if(b==0){
		throw b;
	}
	else if(b==1){
		throw('z');
	}
	else{
		float res= (float)a/b;
		cout<<"Result is: "<<res;
	}
	}
	catch(int){
		cout<<"In the function giving infinity.";
		throw;
	}
	catch(char){
		cout<<"In the function print.";
		throw;
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
		cout<<"\nIn the main method giving infinity!";
	}
	catch(...){
		cout<<"\ninside main caught another";
	}
	return 0;
}
