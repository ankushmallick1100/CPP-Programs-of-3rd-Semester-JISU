#include <iostream>
using namespace std;
class a{
    int a1;
    public:
    a(int x){
        a1=x;
        cout<<"\n initialized class a :"<<a1;
    }
   
};
class b{
    int b1;
    public:
    b(int x1){
        b1=x1;
        cout<<"\n initialized class b :"<<b1;;
    }
};
class c:public  a,public  b
{
    int a3,a4;
    public:
    c(int x2,int y2,int x3,int y3): a(x2),b(y2){
        a3=x3;
        a4=y3;
        cout<<"\n initialized class c\n ";
       
       
    }
    void show(){
        cout<<"\n class c's value "<<a3;
        cout<<"\n class'c 2nd value "<<a4;
    }
   
   
};

int main()
{
    c c1(2,4,5,6);
    c1.show();

    return 0;
}
