#include<iostream>
using namespace std;
class number
{
private:
  int n;
public:
    number ()
  {
    n = 0;
  };
  number (int x)
  {
    n = x;
  }

/*  number & operator - ()
  {
    n = -n;
  }*/
  friend number & operator - (number &);
  void print ()
  {
    cout << "The value: " << n << endl;
  }
};
number & operator- (number & digit)
{
  digit.n = -digit.n;
  return digit;
}
int main ()
{
  int a;
  cout << "Enter the number: ";
  cin >> a;
  number digit1 (a);
  number digit2;
  digit2= -digit1;
  cout << "The value after frinend overload-->" << endl;
  digit2.print ();
//  cout << "The value before normal overload-->" << endl;
//  digit1.print ();
//  -digit1;
//  cout << "The value after normal overload-->" << endl;
//  digit1.print ();
  return 0;
}
