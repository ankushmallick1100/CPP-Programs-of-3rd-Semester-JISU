#include<iostream>
using namespace std;

class employee
{
	int   Employee_number;
	char  Employee_name[20];
	float Basic;
	float DA;
	float IT;
	float Net_salary;
    private:
    	void nets();
	public:
		void details();
		void printdetails();
};

void employee ::details()
{
	cout<<"\nEnter employee number: ";
	cin>>Employee_number;
	cout<<"\nEnter employee name: ";
	cin>>Employee_name;
	cout<<"\nEnter employee basic: ";
	cin>>Basic;
	cout<<"\nEnter employee DA: ";
	cin>>DA;
	cout<<"\nEnter employee IT: ";
	cin>>IT;
}
void employee::nets()
    {
      DA=((0.52)*Basic );
      float gsal=DA+Basic;
    IT=((0.3)*gsal);
      Net_salary=gsal-IT;
      cout<<Net_salary<<"\n";
    }

void employee :: printdetails()
{
	cout<<"\n\n** Details of  Employee **";
	cout<<"\nEmployee Name      :  "<<Employee_name;
	cout<<"\nEmployee number    :  "<<Employee_number;
	cout<<"\nBasic salary       :  "<<Basic;
	cout<<"\nEmployee DA        :  "<<DA;
	cout<<"\nIncome Tax         :  "<<IT;
	cout<<"\nNet Salary         :  ";
	nets();
}
int main()
{
	int n,i;
	cout<<"Enter Number of employee: ";
	cin>>n;
    employee emp[n];
    for(i=0;i<n;i++)
    emp[i].details();
    for(i=0;i<n;i++)
    emp[i].printdetails();
    return 0;
}

