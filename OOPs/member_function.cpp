#include <iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int r, int v){
        real = r;
        imag = v;
    }
    Complex multiply(Complex c){
        int r = real*c.real - imag*c.imag;
        int i = real*c.imag + imag*c.real;
        return Complex(r,i);
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    Complex c1(2,5), c2(3,-2);
    c1.display();
    c2.display();
    Complex c3 = c1.multiply(c2);
    c3.display();
    return  0;
}