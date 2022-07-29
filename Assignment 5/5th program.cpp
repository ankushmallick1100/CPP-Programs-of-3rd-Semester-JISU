#include <iostream>
using namespace std;
class com{//base class
    protected:
    float real,image;
    public:
    void getedata(){
        cout<<"\n enter your values "<<endl;
        cin>>real>>image;
    }
};
class complex_add:public com{//derived class
    float real1,image1;
    public:
    void getdata1(){
        cout<<"\n enter your value again "<<endl;
        cin>>real1>>image1;
    }
    void sum(){
        float real_sum,image_sum;
        real_sum=real1+real;
        image_sum=image1+image;
        cout<<"\n here the value sum : "<<real_sum<<" "<<image_sum;
    }
    friend class own;//friend class
};
class own{
    float real2,image2;
    public:
    void getedata2(){
        cout<<"\n enter your values for 2nd time "<<endl;
        cin>>real2>>image2;
    }
    void diff(complex_add c1){//calculate the diff between base and _Complex
        float diff_real,diff_image;
        diff_real=c1.real-real2;
        diff_image=c1.image-image2;
        cout<<"\n here is the difference "<<endl;
        cout<<diff_real<<diff_image;
    }
};

int main()
{
    complex_add c12;
    c12.getedata();
    c12.getdata1();
    c12.sum();
    own o1;
    o1.getedata2();
    o1.diff(c12);

    return 0;
}
