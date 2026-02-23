#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"Enter a number\n";
    cin>>n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    cout<<"The sum of digits = "<<sum<<endl;
    return 0;
}