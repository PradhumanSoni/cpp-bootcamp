#include<iostream>
using namespace std;

class Calculator {
public:
    inline int multiply(int a, int b);
};

inline int Calculator::multiply(int a, int b) {
    return a * b;
}

int main() {
    Calculator cal;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Product = " << cal.multiply(a, b) << endl;
    return 0;
}