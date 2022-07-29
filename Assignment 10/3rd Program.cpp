#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    const int l=80;
    char country[l],capital[l];
    ofstream File1("Country.txt");
    ofstream File2("Capital.txt");
    int n;
    cout<<"Enter the number of inputs : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<i+1<<")\nEnter country Name : ";
        cin>>country;
        File1<<country<<endl;
        cin.ignore();
        cout<<"Enter Capital Name : ";
        cin>>capital;
        File2<<capital<<endl;
        cin.ignore();
    }
    File1.close();
    File2.close();
    ifstream F1("Country.txt");
    ifstream F2("Capital.txt");
    cout<<"Displaying Details : \n";
    cout<<setw(20)<<"Country"<<setw(10)<<"->"<<setw(20)<<"Capital"<<endl;
    for(i=0;i<50;i++)
    cout<<"-";
    cout<<"\n";
    while(n!=0)
    {
        F1.getline(country,l);
        F2.getline(capital,l);
        cout<<setw(20)<<country<<setw(10)<<"->"<<setw(20)<<capital<<endl;
        n--;
    }
    F1.close();
    F2.close();
    return 0;
}
