#include <iostream>
#include <string>
using namespace std;

// ENCAPSULATION

class Student
{
    private:

    int id;
    int age;
    string name;
    int nos;
    float gpa;
    string gf;

public:

    void setGpa(float a){
        // layer of authentication 
        this->gpa = a; // set means modify the value through function
    }
    float getGpa() const {
        return  this->gpa; //get means accessing the value through function
    }

      Student(int id, int age, string name, int nos, float gpa, string gf)
    {
        this->id = id; 
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = gpa;
        this->gf = gf;
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

    // ~Student()
    // {
    //     cout << "Student Defualt Destructor" << endl;
    //     cout << "Student destory ho raha hai" << endl;
    // }
    // private:
    // void gfChatting(){
    //     cout<<"chatting"<<endl;
    // }
};

int main()
{
    Student A (1, 33, "dev", 5, 8.2,"gf");
    // A.age; // can't access and modify also.
    cout<<A.getGpa()<<endl;
    A.setGpa(8.9);
    cout<<A.getGpa()<<endl;
    // so here we are using functions to get the value and also set the value...
    // All methods are Public and attributes are Private
    return 0;
}