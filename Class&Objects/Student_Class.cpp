#include <iostream>
#include <string>
using namespace std;

// DEFAULT CONSTRUCTOR

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    // Constructor : Default constructor if we don't make ask constructor they the default one will be applied
    Student()
    {
        cout << "Student Defualt Constructor" << endl;
        cout << "Student ban(construct) raha hai" << endl;
    }

    // Behaviour / Methods / Functions

    void study()
    {
        cout << this->name << "studing" << endl;
        // this points to that particular object, means that particular student
        // this keyword refers to particular object
    }
    void sleep()
    {
        cout << this->name << "sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << "bunking" << endl;
    }

    // Destructor : default one...

    ~Student()
    {
        cout << "Student Defualt Destructor" << endl;
        cout << "Student destory ho raha hai" << endl;
    }
};

int main()
{
    Student A; // Student class ka instance is A i:e Object
    A.id = 1;
    A.age = 14;
    A.name = "Dev";
    A.nos = 5;
    A.study();

    Student B;
    B.id = 2;
    B.age = 19;
    B.name = "vvv";
    B.nos = 4;
    B.bunk();
    return 0;
}