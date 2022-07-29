#include<iostream>
using namespace std;
int main()
{
    float inch, feet, cm;
    while(1)
    {
    cout<<"\nEnter the length in feet and inch: ";
    cin>>feet>>inch;
    if(feet>0 && inch>0)
    {
     cm = 30.48*feet + 2.54*inch;
    cout<<"\ncm is : "<<cm;
    break;
    }
    else;
    {
        try 
        {
            throw ("exception is occured due to negative or non digit numbers");
        }
        catch(char const *m)
        {
            cout<<"\n"<<m;
        }
    }
    }
    return 0;

}
