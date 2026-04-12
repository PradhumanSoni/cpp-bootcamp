#include <iostream>
using namespace std;

class Box; // forward declaration

class Cylinder {
    float radius;
public:
    Cylinder(float r) {
        radius = r;
    }
    friend void compareVolume(Cylinder c, Box b);
};

class Box {
    float side;
public:
    Box(float s) {
        side = s;
    }
    friend void compareVolume(Cylinder c, Box b);
};

void compareVolume(Cylinder c, Box b) {
    const float pi = 3.14;
    float cylVol = pi * c.radius * c.radius * 10;
    float boxVol = b.side * b.side * b.side;

    cout << "Cylinder Volume: " << cylVol << endl;
    cout << "Box Volume: " << boxVol << endl;

    if (cylVol > boxVol)
        cout << "Cylinder has larger volume." << endl;
    else
        cout << "Box has larger volume." << endl;
}

int main() {
    Cylinder c1(20.5);
    Box b1(10.2);
    compareVolume(c1, b1);
    return 0;
}