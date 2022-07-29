#include <iostream>
#include <fstream>
using namespace std;
 
class Contestant {
public:
    string Name;
    int Age, Ratings;
    int input();
    int output_highest_rated();
};
 
int Contestant::input()
{
    ofstream file_obj;
 
    file_obj.open("Input1.txt", ios::app);
 
    Contestant obj;
 
    string str = "Michael";
    int age = 18, ratings = 2500;
 
    obj.Name = str;
    obj.Age = age;
    obj.Ratings = ratings;
 
    file_obj.write((char*)&obj, sizeof(obj));
 
    str = "Terry";
    age = 21;
    ratings = 3200;
 
    obj.Name = str;
    obj.Age = age;
    obj.Ratings = ratings;
 
    file_obj.write((char*)&obj, sizeof(obj));
 
    return 0;
}
 
int Contestant::output_highest_rated()
{
    ifstream file_obj;
 
    file_obj.open("Input.txt", ios::in);
 
    Contestant obj;
 
    file_obj.read((char*)&obj, sizeof(obj));
 
    int max = 0;
 
    string Highest_rated;
 
    while (!file_obj.eof()) {
        if (obj.Ratings > max) {
            max = obj.Ratings;
            Highest_rated = obj.Name;
        }
 
        file_obj.read((char*)&obj, sizeof(obj));
    }
 
    cout << Highest_rated;
    return 0;
}
 
int main()
{
    Contestant object;
 
    object.input();
 
    object.output_highest_rated();
 
    return 0;
}
