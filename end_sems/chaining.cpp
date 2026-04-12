#include <iostream>
using namespace std;

class Builder {
    int x, y, z;

public:
    Builder() : x(0), y(0), z(0) {}  // Default constructor initializes all to 0

    // Each setter returns a reference to the current object via *this
    // Return type MUST be Builder& (reference), not Builder (value)
    Builder& setX(int val) {
        x = val;
        return *this;  // *this = the object that called setX()
    }

    Builder& setY(int val) {
        y = val;
        return *this;  // Same object returned; next call chains onto it
    }

    Builder& setZ(int val) {
        z = val;
        return *this;
    }

    // display() doesn't need to return *this since it's the last in the chain
    // but CAN return *this if further chaining is needed
    Builder& display() {
        cout << "x=" << x << " y=" << y << " z=" << z << endl;
        return *this;
    }
};

int main() {
    Builder obj;

    // Method chaining — all on the same object
    obj.setX(10).setY(20).setZ(30).display();
    // Output: x=10 y=20 z=30


    return 0;
}