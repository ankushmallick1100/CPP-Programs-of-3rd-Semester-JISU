#include<iostream>
using namespace std;
template<class type>
void display(type num){
	cout<<num;
}
template<class t,class t2>
void read(t num1,t2 num){
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"enter the second number: ";
	cout<<num;
}
int main(){
	int a;
	float b;
	cin>>a;
	display(a);
	cout<<"\n";
	read(b,a);
	return 0;
}

