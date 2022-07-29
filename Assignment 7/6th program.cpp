#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{       int n;
        cout<<"Enter the number of cities: ";
        cin>>n;
        string str[100], t;
        int i, j;
        cout<<"\n Enter cities Names : ";
        for(i=0; i<=n; i++)
        {
                getline(cin,str[i]);
        }
        for(i=0; i<n;++i)
        {
                for(j=i+1; j<=n; ++j)
                {
                        if(str[i]>str[j])
                        {
                            t=str[i];
                            str[i]=str[j];
                            str[j]=t;
                        }
                }
        }
        cout<<"\n Names Sorted in Alphabetical Order : \n\n";
        for(i=0; i<=n; i++)
        {
                cout<<" ";
                cout<<str[i]<<"\n";
        }
        return 0;
}
