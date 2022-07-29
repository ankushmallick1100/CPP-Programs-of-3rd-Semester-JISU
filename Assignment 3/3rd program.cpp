#include <iostream>
using namespace std;
class cubeconstruct
{
public:
    float vol;
    cubeconstruct()
    {
        vol = 0;
    }
    cubeconstruct(int a)
    {
        vol = a*a*a;
    }
  void display()
    {
    	cout<<"The volume of the cube is: ";
        cout<< vol<< endl;
    }
};

class cylinderconstruct
{
 
public:
    float vol;
    cylinderconstruct()
    {
        vol = 0;
    }
    cylinderconstruct(int r,int h)
    {
        vol = 3.14*r*r*h;
    }
    void display()
    {
    	cout<<"The volume of the cylinder is: ";
        cout<< vol<< endl;
    }
};
class recconstruct
{
 
public:
    float vol;
    recconstruct()
    {
        vol = 0;
    }
    recconstruct(int l,int b,int h)
    {
        vol = l*b*h;
    }
    void display()
    {
    	cout<<"The volume of the rectangular cube is: ";
        cout<< vol<< endl;
    }
};
 
int main()
{
	int p,q,s,u,v,w;
	cout<<"Enter the side of the cube:";
	cin>>p;
	cout<<"Enter the radius of the cylinder:";
	cin>>q;
	cout<<"Enter the height of the cylinder:";
	cin>>s;
	cout<<"Enter the length of the rectangular cube:";
	cin>>u;
	cout<<"Enter the breath of the rectangular cube:";
	cin>>v;
	cout<<"Enter the height of the rectangular cube:";
	cin>>w;
    cubeconstruct c;
    cubeconstruct c2(p);
    cylinderconstruct h;
    cylinderconstruct h2(q,s);
    recconstruct r;
    recconstruct r2(u,v,w);
    c.display();
    c2.display();
    h.display();
    h2.display();
    r.display();
    r2.display();
    return 0;
}
