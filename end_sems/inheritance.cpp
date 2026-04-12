#include <iostream>
using namespace std;
class A{
    int a;
    public:
    int b;
    void set_ab(){
        cout<<"Enter the values of a and b\n";
        cin>>a>>b;
    }
    int get_a(){
        return a;
    }
    void display_a(){
        cout<<"a is equal to -> "<<a<<endl;
    }
};

class B:private A{
    int c;
    public:
    B(int c){
        this->c = c;
    }
    void mul(){
        set_ab();
        int prdt = get_a()*b*c;
        cout<<"Product is -> "<<prdt<<endl;
    }
    void display(){
        display_a();
        cout<<"b is equal to -> "<<b<<endl;
        cout<<"c is equal to -> "<<c<<endl;
    }
};

int main(){
    B bb(34);
    //bb.display_a(); // should not work
    bb.mul();
    bb.display();
    return 0;
}