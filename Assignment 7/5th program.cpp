#include <iostream>
using namespace std;
int main() {
   char str[100],n;
   cin.getline(str,100);
   cin>>n;
   int count = 0;
   for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == n)
      count++;
   }
   cout<<"Frequency of alphabet "<<n<<" in the string is "<<count;
   return 0;
}

