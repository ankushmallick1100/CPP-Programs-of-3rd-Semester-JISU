#include<iostream>
using namespace std;
class first{
	public:
		int b;
		first(int a){
			b=a;
		}
		first(first &i){
			b=i.b;
		}
};
int main(){
	int s;
	cout<<"Enter a value: ";
	cin>>s;
	first f(s);
	cout<<"Value of main: ";
	cout<<f.b<<"\n";
	first f1(f);
	cout<<"Copy result: ";
	cout<<f1.b;
	return 0;
}
