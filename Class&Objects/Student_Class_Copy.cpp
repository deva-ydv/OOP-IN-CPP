#include <iostream>
#include <string>
using namespace std;

// COPY CONSTRUCTOR

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
        // this keyword refers to particular object
        this->id = id; // sets all this value that comes from parameter
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    // COPY CONSTRUCTOR
    Student(const Student &srcobj)
    { // srcobj => A
        cout << "copy consturctor" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
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

    Student C = A; // COPY'S THE OBJECT OF A -> COPY CONSTURCTOR
    Student C(A);  // we can also write like this

    cout << C.name << C.id << endl;

    return 0;
}