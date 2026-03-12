#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    void complex_set(int r, int i) {
        real = r;
        imag = i;
    }

    // Inside the class, '+' only takes ONE argument (the right-hand side)
    Complex operator+(Complex const& obj) {
        Complex tmp;
        tmp.real = real + obj.real;
        tmp.imag = imag + obj.imag;
        return tmp;
    }

    // Inside the class, '-' only takes ONE argument
    Complex operator-(Complex const& obj) {
        Complex tmp;
        tmp.real = real - obj.real;
        tmp.imag = imag - obj.imag;
        return tmp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2;
    c1.complex_set(1, 1);
    c2.complex_set(2, 2);

    Complex c = c1 + c2; // Effectively calls c1.operator+(c2)
    Complex d = c1 - c2;

    cout << "Sum: "; c.display();
    cout << "Diff: "; d.display();

    return 0;
}