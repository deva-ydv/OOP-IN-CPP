#include <iostream>
#include <string>
using namespace std;

// ENCAPSULATION

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

private:
    int gpa;
    string gf;

public:
      Student(int id, int age, string name, int nos, int gpa, string gf)
    {
        this->id = id; 
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = gpa;
        this->gf = gf;
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
    private:
    void gfChatting(){
        cout<<"chatting"<<endl;
    }
};

int main()
{
    Student A (1, 33, "dev", 5, 8.2,"gf");
    cout<<A.age<<endl; // accessible
    // cout<<A.gf<<endl; // not accessible i:e encapsulation
    A.sleep(); //accessible
    // A.gfChatting(); // methods also not accessible
    return 0;
}