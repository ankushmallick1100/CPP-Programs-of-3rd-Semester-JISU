#include<iostream>
using namespace std;
class square{
	public:
	    int l,b;
	private:
		void getdata();
	public:
		void pass();
	friend float area(square a);
	friend float parameter(square p);
};
class circle{
	public:
	    int r;
	private:
		void getdata();
	public:
		void pass();
	friend float area(circle a);
	friend float parameter(circle p);
};
class triangle{
	public:
	    int d,b,c,h;
	private:
		void getdata();
	public:
		void pass();
	friend float area(triangle a);
	friend float parameter(triangle p);
};
float area(square a){
	return float((a.l)*(a.b));
}
float parameter(square p){
	return float(2*(p.l+p.b));
}
float area(circle a){
	return float(3.14*((a.r)*(a.r)));
}
float parameter(circle p){
	return float(2*3.14*(p.r));
}
float area(triangle a){
	return float((0.5)*((a.d)*(a.h)));
}
float parameter(triangle p){
	return float((p.d)+(p.b)+(p.c));
}
void square::getdata(){
	cout<<"Input the length: ";
	cin>>l;
	cout<<"Input the breath: ";
	cin>>b;
}
void circle::getdata(){
	cout<<"Input the radius: ";
	cin>>r;
}
void triangle::getdata(){
	cout<<"Input the 1st side: ";
	cin>>d;
	cout<<"Input the 2nd side: ";
	cin>>b;
	cout<<"Input the 3rd side: ";
	cin>>c;
	cout<<"Input the height: ";
	cin>>h;
}
void square::pass(){
	getdata();
}
void circle::pass(){
	getdata();
}
void triangle::pass(){
	getdata();
}
int main(){
	square s;
	circle c;
	triangle t;
	s.pass();
	c.pass();
	t.pass();
	cout<<"area of square is: "<<area(s);
	cout<<"\n";
	cout<<"Square Parameter is: "<<parameter(s);
	cout<<"\n";
	cout<<"area of circle is: "<<area(c);
	cout<<"\n";
	cout<<"Circle parameter is: "<<parameter(c);
	cout<<"\n";
	cout<<"triangle area is: "<<area(t);
	cout<<"\n";
	cout<<"triangle parameter is: "<<parameter(t);
	return 0;
}
