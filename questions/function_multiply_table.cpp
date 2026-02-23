#include <iostream>
using namespace std;
void table(int n){
    for(int i=1;i<11;i++){
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number to print the table : \n";
    cin>>n;
    table(n);

    return 0;
}