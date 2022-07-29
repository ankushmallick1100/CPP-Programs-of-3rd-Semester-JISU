#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a number:  ";
	cin>>a;
	try{
	if(a==0){
			throw 'z';
		}
		
		else if(a<0){
			throw a;
		}
		else
		   cout<<"Display the number: "<<a;
	}
	catch(int a){
		cout<<"Number is negative: "<<a;
	}
	catch(char c){
		cout<<"Number is "<<c;
	}
	return 0;
}
