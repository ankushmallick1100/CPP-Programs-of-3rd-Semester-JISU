#include<iostream>
#define pi 3.14
using namespace std;
//single inhertitance
class a{
    protected:
    int r;
    public:
    void getedata(){
        cout<<"\n take radius "<<endl;
        cin>>r;
    }
};
class b: public a{
    public:
    void area_of_circle(){
        cout<<"\n here the area by using single inhertitance :"<<pi*r*r;
       
    }
};
//Multiple inhertitance help by constructor
class a1{
    protected:
    int l;
    public:
    void getdata1(){
        cout<<"\n enter the rt's width "<<endl;
        cin>>l;
    }
};
class a2{
    protected:
    int h;
    public:
    void getedata2(){
        cout<<"\n enter the height "<<endl;
        cin>>h;
    }
};
class a3:public a1,public a2{
    public:
    void rt_area(){
        cout<<"\n here the rt area:  "<<l*h;
    }
};
//multilevel inhertitance
class a4{
    protected:
    int l2;
    public:
    void getdata3(){
        cout<<"\n enter sqaure's length"<<endl ;
        cin>>l2;
    }
};
class a5:public a4{
    public:
    void show(){
    cout<<" here the length you entered "<<l2<<endl;    
    }
};
class a6:public a5{
    public:
    void area_square(){
        cout<<" are of sqaure "<<l2*l2<<endl;
    }
   
};
//hybrid inhertitance specially(note:this all are hybrid coz there are used Multiple types of inhertitance)
//here I am gonna use single inhertitance and Multiple inhertitance;
class a7{
    protected:
    int h1;
    public:
    void triangle1(){
        cout<<"enter the height of triangle "<<endl;
        cin>>h1;
       
    }
};
class a8{
    protected:
    int bb;
    public:
    void triangle2(){
        cout<<" enter triangle's base  "<<endl;
        cin>>bb;
    }
};
class a9:public a7{//single

};
class a10:public a7,public a8{//Multiple
protected:
int area;
public:
void area_triangle(){
    cout<<"\n area of triangle "<<(bb*h1)/2;
}
};    
int main(){
    b b1;
    b1.getedata();
    a3 b2;
    b2.getdata1();
    b2.getedata2();
    a6 b3;
    b3.getdata3();
    b3.show();
    a10 b4;
    b4.triangle1();
    b4.triangle2();
    b2.rt_area();
    b1.area_of_circle();
    b3.area_square();
    b4.area_triangle();
   
    return 0;
}
