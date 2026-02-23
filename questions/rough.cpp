#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;
    int **ptr1 = &ptr;

    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"Value in ptr: "<<ptr<<endl;
    cout<<"Value at ptr: "<<*ptr<<endl;
    cout<<"Address of ptr: "<<&ptr<<endl;
    cout<<"Value in ptr1: "<<ptr1<<endl;
    cout<<"Value at *ptr1: "<<*ptr1<<endl;
    cout<<"Value at **ptr1: "<<**ptr1<<endl;
}

