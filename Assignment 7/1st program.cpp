#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[100],tmp;
	int i=0,j=0,g;
	cout<<"enter the string: ";
	cin.getline(a,100);
	j=strlen(a)-1;
	while(i<j){
		tmp=a[j];
		a[j]=a[i];
		a[i]=tmp;
		i++;
		j--;
	}
	puts(a);
	return 0;
}

