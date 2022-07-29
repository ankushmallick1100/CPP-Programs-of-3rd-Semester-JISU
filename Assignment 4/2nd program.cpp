#include<iostream>
using namespace std;

class A
{
private:
int a;


public:
void set_a();
void get_a();
friend A operator *(A,A); //friend function
};

void A :: set_a()
{
a = 5;
}

void A :: get_a()
{
cout<< a <<"\n";
}
A operator *(A ob1, A ob2)
{
A temp;
temp.a = ob1.a * ob2.a;
return temp;
}


int main()
{
A ob1, ob2;
ob1.set_a();
ob2.set_a();

cout<<"The value of a in first object : ";
ob1.get_a();

cout<<"The value of a in second object : ";
ob2.get_a();



A ob3 = ob1 * ob2;	

cout<<"The value of a after calling operator overloading function * is : ";
ob3.get_a();
}

