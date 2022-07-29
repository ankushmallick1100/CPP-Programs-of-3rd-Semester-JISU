#include<iostream>
using namespace std;
float division(float num,float den)
{
    if(den==0)
    {
        throw num;
    }
    return num/den;
}

int main()
{
    float num,den,result;
    cout<<"Enter Numerator : ";
    cin>>num;
    cout<<"Enter Denominator : ";
    cin>>den;
    try
    {
        result=division(num,den);
        cout<<"\nResult : "<<result<<endl;
    }
    catch(float)
    {
        cout<<"\nException Occoured\nMath Error : Trying To Devide by Zero\n";
    }
    char ch;
    cout<<"\nAnother Input(y/n) : ";
    cin >> ch;
    if(ch == 'y')
    main();
    else if(ch=='n')
    return 0;
    return 0; 
}
