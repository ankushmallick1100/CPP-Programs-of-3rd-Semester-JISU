#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str1,str2;
	cout<<"Input 1st string: ";
	getline(cin,str1);
	cout<<"Input 2nd string: ";
	getline(cin,str2);
	string con;
	con=str1+str2;
	cout<<"concatenate: "<<con<<endl;
	return 0;
}

