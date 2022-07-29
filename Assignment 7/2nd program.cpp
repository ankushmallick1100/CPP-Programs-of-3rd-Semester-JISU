#include<iostream>
#include<cstring>
using namespace std;
class stringhandle{
	string str1;
	public:
		void getstring(){
			cout<<"Input a string: ";
			getline(cin,str1);
		}
		void print(){
			cout<<"Inputed string is: "<<str1;
		}
};

int main(){
	stringhandle obj;
	obj.getstring();
	obj.print();
	return 0;
}

