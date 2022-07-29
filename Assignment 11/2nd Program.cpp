#include<iostream>
using namespace std;

template<class type>
type printarray(type a[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

int main(){
	int num,j;
	cout<<"Enter the size of array: ";
	cin>>num;
	int arr[num];
	for(j=0;j<num;j++){
		cout<<"Enter the "<<j+1<<"th element: ";
		cin>>arr[j];
	}
	cout<<"The array is: ";
	printarray(arr,num);
	return 0;
}


