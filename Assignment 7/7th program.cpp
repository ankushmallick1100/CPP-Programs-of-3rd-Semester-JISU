#include <iostream>
#include<string>
using namespace std;
int search(string str1[],int len){
	if(len<0){
		return 0;
	}
	else if(str1[len].find('B')!=string::npos||str1[len].find('b')!=string::npos||str1[len].find('C')!=string::npos||str1[len].find('c')!=string::npos){
	cout<<str1[len]<<endl;
	return search(str1,len-1);
	}
	else{
	return search(str1,len-1);
	}
}

int main(){
   int n,i;
   cout<<"Enter the number of the cities: ";
   cin>>n;
   string str[n];
   cout<<"Enter the names: \n";
   for(i=0;i<n;i++){
   	cin>>str[i];
   }  
   cout<<"cities with B and C: \n";
   search(str,n-1);
   return 0;
}
