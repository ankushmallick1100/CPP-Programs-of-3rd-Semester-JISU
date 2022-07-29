#include "operator_header.h"
int main()
{
    Circle A(10),B(20),C(10);
    if(A==B)
    {
        cout<<"\n first and second circle are equal";
    }
    else if(A!=B)
    {
        cout<<"\n First and second circle are not equal";
    }
    if(A==C)
    {
        cout<<"\n First and third circle are equal";
    }
    else if(A!=C)
    {
        cout<<"\n First and third Circle are not equal";
    }
    return 0;
}