#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	fstream my_file;
	my_file.open("file.txt", ios::out);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_file << "Myself Ankush Mallick";
		my_file.close();
	}
	return 0;
}
