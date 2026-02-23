#include <iostream>
using namespace std;
int main (){
    int n,pdt = 1; //declaration
    cout<<"Enter the number for factorial\n";
    cin>>n;
    int i = 1;
    while (i<=n) {
        pdt*=i;
        i++;
    }
    cout<<"Factorial of "<<n<<" = "<<pdt;
    return 0;



}