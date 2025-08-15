#include <iostream>
#include <string>
using namespace std;

// PARAMETERIZED CONSTRUCTOR

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    Student(int id, int age, string name, int nos)
    {
        cout << "parameterized constructor called, and uses attributes and create an Object" << endl;
        // this keyword refers to particular object
        this->id = id; // sets all this value that comes from parameter
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    // Behaviour / Methods / Functions

    void study()
    {
        cout << this->name << "studing" << endl;
        // this points to that particular object, means that particular student
    }
    void sleep()
    {
        cout << this->name << "sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << "bunking" << endl;
    }
};

int main()
{

    Student A(1, 33, "dev", 5);
    Student B(2, 19, "ved", 4);
    Student C(3, 21, "raj", 7);

    cout << A.id << A.name << endl;

    return 0;
}