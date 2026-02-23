#include <iostream>
using namespace std;
int main (){
    int a,digit=0;
    cout<<"Enter a number\n";
    cin>>a;
    int num=a; //temp variable so that main number remains same
    while(num!=0) {
        num=num/10; //getting the integer division per loop
        digit+=1; //counting the digit per loop
    }
    cout<<"The Entered number is of = "<<digit<<" digits";
    return 0;
}