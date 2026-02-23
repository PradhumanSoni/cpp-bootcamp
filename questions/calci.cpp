#include <iostream>
using namespace std;
class Calculator
{
    double a,b;
    char op;
    
    void addition()
    {
        cout<<"Addition of the two number"<<a<<op<<b<<" = "<<a+b<<endl;
    }
    void minus()
    {
        cout<<"minus of the two number"<<a<<op<<b<<" = "<<a-b<<endl;
    }
    void multiply()
    {
        cout<<"Multiplication of the two number"<<a<<op<<b<<" = "<<a*b<<endl;
    }
    void division()
    {
        cout<<"Division of the two number"<<a<<op<<b<<" = "<<a/b<<endl;
    }
    void modulus()
    {
        cout<<"Modulus of the two number"<<a<<op<<b<<" = "<<int(a)%int(b)<<endl;
    }

    public:
    Calculator()
    {
        cout<<"Enter the first number"<<endl;
        cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
        cout<<"Enter the operator you want to perform"<<endl;
        cin>>op;
        cout<<"Operator Chosen : "<<op<<endl;
    }
    
    void calci()
    {
        switch (op)
        {
            case '+' :
                addition();
                break;
            case '-' :
                minus();
                break;
            case '*' :
                multiply();
                break;
            case '/' :
                division();
                break;
            case '%' :
                modulus();
                break;
            default:
                cout<<"Enter a valid arithmetic operator"<<endl;
                break;
        }
    }
};
int main()
{
    Calculator c1;
    c1.calci();
    return 0;
}