#include<iostream>
using namespace std;
int main(){
	int x,y;
	float a;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	try{

	if(y==0){
		throw y;
	}
	else
	a=(float)x/y;
	cout<<"Result is: "<<a;
	}
	catch(int){
		cout<<"Giving infinity";
	}
	return 0;
}
