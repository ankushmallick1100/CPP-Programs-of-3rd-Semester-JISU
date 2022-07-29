#include<iostream>
using namespace std;
class Stat
{
  int code;
  static int count;
  public:
  void setcode(void)
  {
    code=++count;
  }
    void showcode(void)
  {
    cout<<"code : "<< code <<endl;
  }
    static void showcount(void)
  {
    cout<<"Count : "<<count<<endl;
  }
};
int Stat :: count;
int main()
{ 
  Stat obj1, obj2, obj3;
  obj1.setcode();
  obj2. setcode();
  Stat :: showcount();
  obj1.showcode();
  Stat :: showcount();
  obj2.showcode();
  obj3.setcode();
  obj3. showcode();
  Stat :: showcount();
return 0;
}
