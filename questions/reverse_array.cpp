#include <iostream>
using namespace std;
int main(){
    //reverse array
    int n;
    cout<<"Enter the length of array\n";
    cin>>n;
    int A[n],B[n];
    cout<<"Enter the array elements one by one\n";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Array entered\n";
    for(int j=0;j<n;j++){
        B[j] = A[4-j];
    }
    
    for(int i=0;i<n;i++){
        cout<<B[i]<<" ";
    }

    return 0;
}