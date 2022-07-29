#include<iostream>
using namespace std;
class Inline
{
 public:
 int a;
 int b;
 int multi();
};
inline int Inline :: multi()
{
   return (a*b); 
}
int main()
{
   Inline i;
   cout<<"Enter First Enteger : ";
   cin>>i.a;
   cout<<"Enter Second Enteger : ";
   cin>>i.b;
   cout<<i.a<<" "<<i.b<<" = "<<i.multi();
   return 0;
}
