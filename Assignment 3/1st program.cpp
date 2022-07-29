#include<iostream>
using namespace std;
class mobile{        
  public:          
    string brand;  
    string model;  
    int year;      
    mobile(string a, string b, int z) { 
      brand = a;
      model = b;
      year = z;
    }
};

int main() {
  mobile mobileObj1("iPhone ", "12 pro", 2020);
  mobile mobileObj2("OnePlus", "Nord  ", 2020);
  mobile mobileObj3("Samsumg", "M32 5G", 2020);

  cout << mobileObj1.brand << " " << mobileObj1.model << " " << mobileObj1.year << "\n";
  cout << mobileObj2.brand << " " << mobileObj2.model << " " << mobileObj2.year << "\n";
  cout << mobileObj3.brand << " " << mobileObj3.model << " " << mobileObj3.year << "\n";

  return 0;
}
