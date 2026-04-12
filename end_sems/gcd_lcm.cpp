#include <iostream>
using namespace std;
int  main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int rem=1;
    while(rem!=0){
        rem = a%b;
        a = b;
        b = rem;
    }
    cout<<"GCD is : "<<a<<endl;
    return 0;
}