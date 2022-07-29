#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream file;
file.open("ankush.txt",ios::out);
if(!file)
{
	cout<<"Error in creating file!!!";
	return 0;
}
cout<<"File created successfully.";
file.close();

return 0;
}
