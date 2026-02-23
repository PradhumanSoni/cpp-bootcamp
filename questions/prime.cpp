#include <iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the upto natural numbers to check\n";
    cin>>x;
    if (x ==2){cout<<"Prime";}
    else{
        for (int i = 3;i<=x;i++) {
            for (int j = 2;j<i;j++) {
                if (n%i==0){

                    break;
                }    
            }  
            cout<<i<<endl;
        }
    }
    return 0;
}