#include<iostream>
using namespace std;
class getting{
	private:
		int m,n;
	public:
		void getdata(){
			cout<<"Enter the 1st number: ";
			cin>>m;
			cout<<"Enter the 2nd number: ";
			cin>>n;
		}
int getm(){
			return (m);
		}
		int getn(){
			return (n);
		}
};
class show{
	int a,b;
	public:
		show(){
		}
		show(getting g){
			a=g.getm();
			b=g.getn();
		}
		void showdata(){
			cout<<"1st value: "<<a<<endl;
			cout<<"2nd value: "<<b<<endl;
		}
};
int main(){
	getting g;
	show s;
	g.getdata();
	s=g;
	s.showdata();
	return 0;
}
