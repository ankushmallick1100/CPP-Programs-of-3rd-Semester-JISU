#include <iostream>
using namespace std;
template <class T>
T large(T n1, T n2)
{
    if(n1 > n2)
    return n1;
	else
	return n2;
}
int main()
{
        int i1, i2;
        float f1, f2;
        cout << "Enter two integers:\n";
        cin >> i1 >> i2;
        cout << large(i1, i2) <<" is larger." << endl;
        cout << "\nEnter two floating-point numbers:\n";
        cin >> f1 >> f2;
        cout << large(f1, f2) <<" is larger." << endl;
        return 0;
}

