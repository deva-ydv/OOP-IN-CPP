#include <bits/stdc++.h>
using namespace std;

// ABSTRACTION

class Example
{
private: // by making these data members Private, we have hidden them from outside the world.
    int num;
    int pass;

public:  // These data members are accessible outside the class.
// But the only way to set and get their values is through the public functions.
    void setMyValues(int n, int p)
    {
        num = n;
        pass = p;
    }

    void getMyValues()
    {
        cout << "Number is: " << num << endl;
        cout << "Pass is: " << pass << endl;
    }
};

int main()
{

    Example Obj;
    Obj.setMyValues(4, 1234);
    Obj.getMyValues();

    return 0;
}