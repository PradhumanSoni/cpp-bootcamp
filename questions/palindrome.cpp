#include <iostream>
using namespace std;

int main() {
    int n,rev=0,temp;
    cout<<"Enter a number\n";
    cin>>n;
    temp=n;
    while(temp>0){
        rev = rev*10 + (temp%10);
        temp/=10;
    }
    if (n==rev){
        cout<<"The number is a Palindrome\n";
    }else{
        cout<<"Not a Palindrome\n";
    }
    return 0;
}