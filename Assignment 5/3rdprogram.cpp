#include<iostream>
using namespace std;
class student
{
	int s;
	protected:
		int T_prof = 300000;
	public:
		student()
		{
			s = 206;
		}
		void t_display()
		{
			cout<<"Total Students: "<<s<<endl;
			cout<<"Total Profit: "<<T_prof<<endl<<endl;
		}
};
class Arts: private student
{
	int a;
	protected:
		int a_prof = 40000;
	public:
		Arts()
		{
			a = 32;
		}
		void a_display()
		{
			t_display();
			cout<<"Students in Arts: "<<a<<endl;
			cout<<"Profit from Arts Students: "<<a_prof<<endl<<endl;
		}
}ar;
class Engineering: protected student
{
	int e;
	protected:
		int e_prof = 100000;
	public:
		Enginnering()
		{
			e = 138;
		}
		void e_display()
		{
			t_display();
			cout<<"Students in Engineering: "<<e<<endl;
			cout<<"Profit from Engineering Student: "<<e_prof<<endl<<endl;
		}
}en;
class Medical: public student
{
	int m;
	protected:
		int m_prof = 160000;
	public:
		Medical()
		{
			m = 43;
		}
		void m_display()
		{
			t_display();
			cout<<"Students in Medical: "<<m<<endl;
			cout<<"Profit from Medical Student: "<<m_prof<<endl;
		}
}mb;
int main()
{
	ar.a_display();
	en.e_display();
	mb.m_display();
	return 0;
}
