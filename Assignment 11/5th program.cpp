#include<iostream>
using namespace std;
int n,i,j;
template<class t>
void read(t arr[]){
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
}
template<class t>
void print(t arr[]){
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
template<class type>
void bubble(type arr[]){
	for(i=0; i<n-1; i++){
    	for(j=0; j<n-i-1; j++){
		if(arr[j]>arr[j+1])
    	{
    	    type temp=arr[j+1];
    	    arr[j+1]=arr[j];
    	    arr[j]=temp;
		}
	}
}
}
int main(){
	cout<<"Enter the array element:";
	cin>>n;
	int arr[n];
	cout<<"Enter integers:";
	read(arr);
	cout<<"The array is before: ";
	print(arr);
	char arr1[n];
	cout<<"Enter characters: ";
	read(arr1);
	cout<<"The array is before: ";
	print(arr1);
	
	bubble(arr);
	cout<<"Integer array after sorting: \n";
	print(arr);
	
	bubble(arr1);
	cout<<"Character array after sorting: \n";
	print(arr1);
	
	return 0;
}

