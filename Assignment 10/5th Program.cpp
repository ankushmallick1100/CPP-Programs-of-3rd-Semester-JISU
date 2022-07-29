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
    file_obj.open("Input.txt", ios::app);
    Contestant obj;
    string str = "Ram";
    int age = 20, ratings = 3000;
    obj.Name = str;
    obj.Age = age;
    obj.Ratings = ratings;
    file_obj.write((char*)&obj, sizeof(obj));
    str = "Shyam";
    age = 25;
    ratings = 3500;
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
