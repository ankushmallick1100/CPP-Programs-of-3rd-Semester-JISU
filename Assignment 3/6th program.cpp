#include <iostream>
using namespace std;
class addition{
    int a,b;
    public:
    int s;
    addition(int a,int b){
        cout<<"the consturcter addition is created"<<endl;
        s=a+b;
    }
    void disp(){
        cout<<"\n here sum is:"<<s;
    }
    ~addition(){
        cout<<"\n the constructor adition is destroyed";
    }
   
};
class substraction{
    int a,b;
    public:
    int s;
    substraction(int a,int b){
        cout<<"the consturcter substraction is created"<<endl;
        s=a+b;
    }
    void disp(){
        cout<<"\n substraction is:"<<s;
    }
    ~substraction(){
        cout<<"\n the consturcter substraction is destroyed";
    }
   
};

class mul{
    int a,b;
    public:
    int s;
    mul(int a,int b){
        cout<<"the consturcter mulyiplication is created"<<endl;
        s=a+b;
    }
    void disp(){
        cout<<"\n sum is:"<<s;
    }
    ~mul(){
        cout<<"\n the consturcter mulyiplication is destroyed";
    }
   
};
int main()
{
	int a,b;
	cout<<"Enter the number: ";
	cin>>a>>b;
    addition a1(a,b);
    substraction s1(a,b);
    mul m1(a,b);
    a1.disp();
    s1.disp();
    m1.disp();
    return 0;
}
