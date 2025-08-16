#include <iostream>
using namespace std;

//
// 1. SINGLE INHERITANCE
//
class Animal {
public:
    void eat() {
        cout << "[Single] Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "[Single] Barking..." << endl;
    }
};

//
// 2. MULTILEVEL INHERITANCE
//
class LivingBeing {
public:
    void breathe() {
        cout << "[Multilevel] Breathing..." << endl;
    }
};

class Mammal : public LivingBeing {
public:
    void walk() {
        cout << "[Multilevel] Walking..." << endl;
    }
};

class Human : public Mammal {
public:
    void speak() {
        cout << "[Multilevel] Speaking..." << endl;
    }
};

//
// 3. MULTIPLE INHERITANCE
//
class Engine {
public:
    void start() {
        cout << "[Multiple] Engine started" << endl;
    }
};

class Wheels {
public:
    void roll() {
        cout << "[Multiple] Wheels rolling" << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "[Multiple] Car is driving" << endl;
    }
};

//
// 4. HIERARCHICAL INHERITANCE
//
class Vehicle {
public:
    void fuel() {
        cout << "[Hierarchical] Fueling vehicle" << endl;
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        cout << "[Hierarchical] Bike is riding" << endl;
    }
};

class Truck : public Vehicle {
public:
    void load() {
        cout << "[Hierarchical] Truck is loading" << endl;
    }
};

//
// 5. HYBRID INHERITANCE
//
class Person {
public:
    void identity() {
        cout << "[Hybrid] I am a person" << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "[Hybrid] I am studying" << endl;
    }
};

class Teacher : public Person {
public:
    void teach() {
        cout << "[Hybrid] I am teaching" << endl;
    }
};

// Hybrid: combination of multiple + hierarchical
class Researcher : public Student, public Teacher {
public:
    void research() {
        cout << "[Hybrid] I am researching" << endl;
    }
};

//
// MAIN FUNCTION
//
int main() {
    cout << "=== SINGLE INHERITANCE ===" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n=== MULTILEVEL INHERITANCE ===" << endl;
    Human h;
    h.breathe();
    h.walk();
    h.speak();

    cout << "\n=== MULTIPLE INHERITANCE ===" << endl;
    Car c;
    c.start();
    c.roll();
    c.drive();

    cout << "\n=== HIERARCHICAL INHERITANCE ===" << endl;
    Bike b;
    Truck t;
    b.fuel();
    b.ride();
    t.fuel();
    t.load();

    cout << "\n=== HYBRID INHERITANCE ===" << endl;
    Researcher r;
    r.study();
    r.teach();
    r.research();

    return 0;
}
