#include <iostream>
using namespace std;

template <class T>
T Large(T n1, T n2)
{
       cout<< n1+n2<<endl;
       
       if(n1>n2)
       cout<< n1-n2<<endl;
       else
       cout<< n2-n1<<endl;
       
       cout<< n1*n2<<endl;
       cout<< (n1/n2);
}

int main()
{
       float a,b;
       cin>>a>>b;
       Large(a,b);
        return 0;
}

