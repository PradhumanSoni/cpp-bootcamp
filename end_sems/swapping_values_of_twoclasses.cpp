#include <iostream>
using namespace std;
class A;
class B{
    int value1;
    public:
    B(){
        cout<<"Enter Value 1 ->";
        cin>>value1;
    }
    void display(){
        cout<<"Value 1 -> "<<value1<<endl;
    }
    friend void swap(B&,A&);
};
class A{
    int value2;
    public:
    A(){
        cout<<"Enter Value 2 -> ";
        cin>>value2;
    }
    void display(){
        cout<<"Value 2 -> "<<value2<<endl;
    }
    friend void swap(B&, A&);
};

void swap(B &b, A &a){
    int temp = a.value2;
    a.value2 = b.value1;
    b.value1 = temp;
}

int main(){
    B b; A a;
    cout<<"Before Swapping :"<<endl;
    b.display();
    a.display();
    cout<<"After Swapping :"<<endl;
    swap(b,a);
    b.display();
    a.display();

}