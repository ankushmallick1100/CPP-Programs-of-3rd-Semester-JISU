#include<iostream>
using namespace std;
#include<string.h>
class sim_company
{
    char company[10];
    public:
    void get_data()
    {
        cout<<"\n Enter the sim company : ";
        cin>>company;
    }
    void show_data()
    {
        cout<<"\n the sim company is : "<<company;
    }
};
class data_price: public sim_company
{
    int price;
    public:
    void get_data1()
    {
        cout<<"\n Enter the price in budget : ";
        cin>>price;
    }
    void show_data1()
    {
        cout<<"\n The price of the data pack is : "<<price;
    }
};
class data_pack: public data_price
{
    int pack;
    public:
    void get_data2()
    {
        get_data();
        get_data1();
        cout<<"\n Enter the data pack in mb : ";
        cin>>pack;
    }
    void show_data2()
    {
        show_data();
        show_data1();
        cout<<"\n The data pack in mb is : "<<pack;
    }
};