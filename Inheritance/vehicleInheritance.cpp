#include<iostream>
#include<string>
using namespace std;

// INHERITANCE

class Vehicle {
    // PARENT or BASE CLASS
// private:
//  string name; // this private attribute will not accessible in Car, Unless we use getter and setter function i:e Encapsulation

    public:
    string name;
    string model;
    int noOfTyres;

    Vehicle(string _name, string _model, int _noOfTyres){
        cout<<"I am inside Vehicle Ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

    public:

    void start_engine(){
        cout<<"engine is started "<<name <<" "<<model<<endl;
    }
    void stop_engine(){
        cout<<"Engine is stopping "<< name << " " <<model <<endl;
    }
    ~Vehicle(){
        cout<<"inside vehicle Dtor"<<endl;
    }

};

class Car : public Vehicle
{
    public:
    int noOfDoors;
    string transmissionType;

    Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyres)
    {
        cout<<"I am inside Car Ctor"<<endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }
    
    void startAC(){
        cout<<"AC has started of " << name <<endl;
    }
    ~Car(){
        cout<<"inside car Dtor"<<endl;
    }
};


int main(){

    Car A("Defender","SUV",4,4,"automatic");
    cout<<A.model<<endl<<A.name<<endl<<A.noOfDoors<<endl<<A.noOfTyres<<endl;
    A.start_engine();
    A.startAC();
    return 0;
}


// CONSTURCTOR: For Ctor first Base/Parent class/Derived Ctor will be called then child ctor will called.
// DESTURCTOR: For Dtor first child/Derived Dtor will be called then Parent Dtor will called.


