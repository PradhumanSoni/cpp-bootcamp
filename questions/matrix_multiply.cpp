#include <iostream>
using namespace std;
int main(){
    int i1,j1,i2,j2;
    cout<<"Enter the shape of matrix A\n";
    cin>>i1>>j1;
    int A[i1][j1];
    cout<<"Enter the elements one by one\n";
    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter the shape of Matrix B\n";
    cin>>i2>>j2;
    int B[i2][j2];
    cout<<"Enter the elements of Matrix B\n";
    for(int i=0;i<i2;i++){
        for(int j=0;j<j2;j++){
            cin>>B[i][j];
        }
    }
    cout<<"The Matrix A is\n";
    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Matrix B is\n";
    for(int i=0;i<i2;i++){
        for(int j=0;j<j2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    int C[i1][j2]={};
    if(j1!=i2){
    cout<<"Matrix Multiplication Not Possible\n";
    }
    else{
        for(int i=0;i<i1;i++){
            for(int j=0;j<j2;j++){
                for(int k=0;k<j1;k++){
                    C[i][j] +=A[i][k]*B[k][j];
                }
            }
        }
    }

    cout<<"Final Matrix is =\n";
    for(int i=0;i<i1;i++)
    for( int j=0;j<j2;j++){
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
    return 0;
}