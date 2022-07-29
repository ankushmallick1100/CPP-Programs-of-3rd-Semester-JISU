#include <iostream>
using namespace std;
// base class
class Student
{
public:
Student()
{
cout << "This is an Engineering Student" << endl;
}
};
// first sub class
class Arts: public Student
{
};
// second sub class
class Engineering: public Student
{
};
// third sub class
class Medical: public Student
{
};
// main function
int main()
{
// creating object of sub class will
// invoke the constructor of base class
Engineering objMechanical;
Engineering objComputerSc;
Engineering objCivil;

return 0;
}
