#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int n;
    cout<<"\nEnter a Array Index to print its value : ";
    cin>>n;
    try
    {
        if(n>4 || n<0)
        throw n;
        else
        cout<<"\nValue of array["<<n<<"] = "<<arr[n];
    }
    catch(int)
    {
        cout<<"\nYou are trying to access an element out of array bounds. \n";
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
