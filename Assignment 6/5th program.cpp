#include <iostream>
#define pi 3.14
using namespace std;
class cube{
    int a;
    public:
    void getedata(int x)
    {
        a=x;
    }
    void volume(){
        cout<<"\n here the volume is : "<<a*a*a;
    }
};
class cylinder:public cube{
    int r,h;
    public:
    void getedata(int x1,int y1){
        r=x1;
        h=y1;
       
    }
    void volume(){
        cout<<"\n here the volume "<<pi*r*r*h;
    }
   
};
class rectangle:public cylinder{
    int i,w,h1;
    public:
    void getedata(int i1,int w1,int h2){
        i=i1;
        w=w1;
        h1=h2;
    }
    void volume(){
        cout<<"\n here the volume "<<i*w*h1;
    }
   
};

int main()
{
    rectangle r1;
    r1.cube::getedata(4);
    r1.cube::volume();
    r1.cylinder::getedata(5,6);
    r1.cylinder::volume();
    r1.rectangle::getedata(6,7,8);
    r1.rectangle::volume();

    return 0;
}
