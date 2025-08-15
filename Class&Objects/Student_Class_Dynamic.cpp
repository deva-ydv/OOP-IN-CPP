#include <iostream>
#include <string>
using namespace std;

//  DYNAMIC MEMORY ALLOCATION

class Student
{
public:
    int id;
    int age;
    string name;
    int nos;
    int *gpa; // dynamic

    Student(int id, int age, string name, int nos, float gpa)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa); // allocation for memory
    }
    Student(const Student &srcobj)
    {
        cout << "copy consturctor" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }
    void study()
    {
        cout << this->name << "studing" << endl;
    }
    void sleep()
    {
        cout << this->name << "sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << "bunking" << endl;
    }
    ~Student()
    {
        cout << "Student Defualt Destructor" << endl;
        cout << "Student destory ho raha hai" << endl;
        delete this->gpa; // deleting here
    }
};

int main()
{
    // Student A(1,33,"dev",5);
    // Student C = A;
    // Student C(A);
    // cout<<C.name<<C.id<<endl;

    // so for dynamic memory Allocation or Student pointer

    Student *D = new Student(1, 14, "D", 6, 8.2);

    cout << D->name << endl;
    cout << D->age << endl;
    D->study();

    delete D; // so for dynamic memory allocation we have delete that memory by own.
    // but in static the by default destructor method is called to delete the memory.

    return 0;
}