#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird {
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // Pure virtual functions: must be implemented in derived classes.
    // classes that inherits this class has to implement pure virtual functions.
};

class Sparrow : public Bird {
public: 
    void eat() override {
        cout << "Sparrow is eating" << endl;
    }
    void fly() override {
        cout << "Sparrow is flying" << endl;
    }
};

class Eagle : public Bird {
public: 
    void eat() override {
        cout << "Eagle is eating" << endl;
    }
    void fly() override {
        cout << "Eagle is flying" << endl;
    }
};

#endif
