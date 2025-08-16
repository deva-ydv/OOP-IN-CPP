#include<iostream>
#include<string>
using namespace std;

// POLYMORPHISM  = Many Forms

class Add
{
    public:
// Function Overloading
// Same function name but different behaviour
    int sum(int x, int y){
        cout<<"sum of 2 int"<<endl;
        return x + y;
    }
    int sum(int x, int y, int z){
        cout<<"sum of 3 int"<<endl;
        return x + y + z;
    }

    double sum(double x, double y){
        cout<<"sum of 2 double"<<endl;
        return x + y;
    }

};


int main(){

    int x = 5, y = 4, z = 4;
    
    Add add;
    cout<<add.sum(x,y)<<endl;
    cout<<add.sum(x,y,z)<<endl;
    cout<<add.sum(4.2,7.5)<<endl;
    return 0;
}