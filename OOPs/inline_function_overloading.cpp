#include <iostream>
using namespace std;
class Operator
{
    public:
    void add(int a, int b);
    void add(int a,double b);
    void add(double a,int b);
    void add(double a,double b);
};

inline void Operator::add(int a, int b){
    cout<<"Int Addition is : "<<a+b<<endl;
}
inline void Operator::add(int a, double b){
    cout<<"2nd double Addition is : "<<a+b<<endl;
}
inline void Operator::add(double a, int b){
    cout<<"1st double Addition is : "<<a+b<<endl;
}
inline void Operator::add(double a, double b){
    cout<<"both double Addition is : "<<a+b<<endl;
}

int main(){
    Operator o;
    o.add(5.0,6);
    o.add(5,6.5);
    o.add(6.7,8);
    o.add(3.5,6.1);
    o.add(5,45);
    return 0;
}