#include<iostream>
using namespace std;
template<class type>
type area(type length,type breath){
	return length*breath;
}
int main(){
	int a,b;
	float c,d;
	cout<<"Enter the value for integer typr area-->\n\n";
	cout<<"Enter the length and breath:";
	cin>>a>>b;
	cout<<"Enter the value for float typr area-->\n\n";
	cout<<"Enter the length and breath:";
	cin>>c>>d;
	cout<<"The integer type area is:"<<area(a,b)<<endl;
	cout<<"The float type area is:"<<area(c,d);
	return 0;
}

