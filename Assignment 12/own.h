#include<iostream>
#include<math.h>
using namespace std;
void arm(int num, int power)
{
    int old,rem,sum=0;
    old = num;
    while(num!=0)
    {
        rem = num %10;
        sum = sum + pow(rem,power);
        num = num/10;
    }
    if(old == sum)
    {
        cout<<"\n It is armstrong number.";
    }
    else
    {
        cout<<"\ It is not armstrong number.";
    }

}
