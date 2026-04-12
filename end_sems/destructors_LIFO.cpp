#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }
    ~Base() {           // virtual is CRITICAL for correct polymorphic destruction
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor" << endl;
    }
    ~Derived() {                // overrides Base's virtual destructor
        cout << "Derived Destructor" << endl;
        // compiler automatically calls ~Base() after this body finishes
    }
};

int main() {
    Derived d;                  // stack-allocated: destroyed when scope ends
    return 0;
}