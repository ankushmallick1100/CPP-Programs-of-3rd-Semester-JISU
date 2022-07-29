using namespace std;
#include<iostream>
class Circle
{
    float radius;
    public:
    Circle(float r = 0) : radius(r) { }
    bool operator ==(Circle a)
    {
        return this->radius==a.radius;
    }
    bool operator !=(Circle a)
    {
        return this->radius!=a.radius;
    }
};