#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class Item
{
   char code[10];
   int price;
   int no=0;
   int amount;
   public:
   void choice();
   void additem();
   void deleteitem();
   void display();
   void total();
}item [20];
   int totalno=0;
   int totalamount=0;
   int n=0;
void line()
{
   for(int i=0;i<62;i++)
   cout<<"-";
   cout<<endl;
}
void line2()
{
   for(int i=0;i<36;i++)
   cout<<"-";
   cout<<endl;
}
void Item :: choice()
{
   char ch;
   system("cls");
   cout<<"Welcome To Shopping Mall"<<endl;
   line2();
   cout<<setw(20)<< "1. Add Item "<<endl;
   cout<<setw(20)<<"2.Delete Item "<<endl;
   cout<<setw(20)<< "3. Print Receipt"<<endl;
   cout<<setw(20)<<"4. Exit "<<endl;
   line2();
   cout<<setw(28)<<"Enter Your Choice : ";
   cin>>ch;
   switch (ch)
   {
    case '1':
      additem();
      choice();
      break;
    case '2':
      deleteitem();
      choice();
      break;
    case '3':
      display();
      total();
      break;
      break;
    default:
      choice();
    }
}
void Item :: additem()
{
	
   system("CLS");
   line();
   cout<<setw(30)<< "Enter Item Code : ";
   cin>>item[n].code;
   cout<<setw(30) << "Enter Item Price : ";
   cin>>item[n].price;
   cout<<setw(38)<<"No of this Item you want : ";
   cin>>item[n].no;
   item[n].amount=item[n].price*item[n].no;
   n++;
}
void Item :: deleteitem()
{
   int d,e,i;
   system("CLS");
   line();
   display();
   cout<<"Enter Item No To delete : ";
   cin>>d;
   cout<<"How many you want to delete : ";
   cin>>e;
   item[d-1].no=item[d-1].no-e;
   item[d-1].amount=item[d-1].no*item[d-1].price;
   if(item[d-1].no <0)
   {
    cout<<"Wrong Input!!!"<<endl;
    deleteitem();
   }
   else if (item[d-1].no == 0)
   {
       for(i=d-1;i<n;i++)
        {
         item[i]=item[ 1+1];
        }
        n--;
    }
}
void Item :: display()
{
   int i;
   system ("CLS");
   cout<<setw(36)<<"Item List"<<endl;
   line();
   line();
   cout<<setw(2)<<"No"<<setw(28)<<"Item Code"<<setw(28)<<"Item Amount"<<setw(26)<< "Item Price(Rupees)"<<endl;
   line();
   for(i=0;i<n;i++)
   {
     cout<<setw(2)<<i+1<<setw(20)<<item[i].code<<setw(20)<<item[i].no<<setw(28)<<item[i].amount<<endl;
   }
   line();
}
void Item :: total()
{
	for(int i=0;i<n;i++)
   {
    totalno-totalno+item[1].no;
    totalamount=totalamount+item[i].amount;
   }
    cout<<setw(48)<< "Total No of Items : "<<totalno<<setw(17)<< "Total Price : "<<totalamount<<endl;
    line();
}
int main()
{
Item ab;
ab.choice();
return 0;	
}
   
