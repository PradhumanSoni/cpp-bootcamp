#include <iostream>
using namespace std;
int main(){
    int n,digit = 0,tmp;
    cout<<"Enter number\n";
    cin>>n;
    //count digits
    
    tmp = n;
    while (tmp!=0){
        tmp = tmp/10;
        digit = digit +1;
    }
    cout<<"Digits = "<<digit<<endl;

    //checking armstrong
    int a = n,total = 0;
    while (a!=0) {
        int p =1;
        // this for loop finds the power of each digit
        for (int i = 1;i<=digit;i++){
            p = p*(a%10);
        }
        total = total + p; //this adds the power one by one
        a = a/10; //this reduces the number.
    }
    cout<<"Total Sum = "<<total<<endl;

    // Is sum == the original number

    if (total == n){
        cout<<"The Number is Armstrong Number\n";
    }
    else {
        cout<<"Not An Armstrong Number\n";
    }
    return 0;

}