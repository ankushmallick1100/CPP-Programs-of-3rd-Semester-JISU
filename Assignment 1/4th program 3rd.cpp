#include<iostream>
using namespace std;
class star{
	int i,j,n;
	public:
		void getdata();
		void process();
};

void star::getdata(){

	cout<<"Enter the range: ";
	cin>>n;
}
void star::process(){
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	star s;
	s.getdata();
	s.process();
	return 0;
}
