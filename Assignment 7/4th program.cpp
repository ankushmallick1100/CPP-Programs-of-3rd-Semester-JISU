#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1, s2, s3,s4;
    cout<<"Enter first string: "<<endl;
    cin>>s1;
    cout<<"Enter second string: "<<endl;
    cin>>s2;
    cout<<"Enter third string: "<<endl;
    cin>>s3;
    s4=s1 + s2 + s3;
    s1= s1.append(s2);
cout<<"Your new string using + operator: "<<s4<<endl;
cout<<"Your new string using append function: "<<s1.append(s3);
return 0;
}
