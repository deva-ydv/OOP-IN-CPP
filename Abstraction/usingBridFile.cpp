#include<iostream>
#include "Bird.h"   // use quotes, not < >
using namespace std;

// Bird.h -> Vendor
// usinBirdFile.cpp -> Client
// so here we are using the Bird.h file as client means we don't know what's written on the bird file
void birdDoesSomething(Bird* bird) {
    bird->eat();
    bird->fly();
    bird->eat();
}

int main() {
    // Sparrow s;
    // Eagle e;
    // cout << "Testing Sparrow:" << endl;
    // birdDoesSomething(&s);

    // cout << "Testing Eagle:" << endl;
    // birdDoesSomething(&e);

    Bird* bird = new Sparrow();   // Pointer to base class, object of derived class
    birdDoesSomething(bird);

    cout << "\nNow with Eagle:\n";
    Bird* bird2 = new Eagle();
    birdDoesSomething(bird2);

    // Free allocated memory
    delete bird;
    delete bird2;

    return 0;
}
