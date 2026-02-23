#include <iostream>
using namespace std;

int determinant(int A[10][10], int n){
    int det = 0, submatrix[10][10];
    if (n==1) return A[0][0];
    if (n==2) return A[0][0]*A[1][1]-A[1][0]*A[0][1];

    for(int x = 0;x<n;x++){
        int subi=0;
        for(int i=1;i<n;i++){
            int subj=0;
            for(int j=0;j<n;j++){
                if (j==x) continue;
                submatrix[subi][subj++] = A[i][j];
            }
            subi++;
        }
        det+= (x%2==0?1:-1)*A[0][x]*determinant(submatrix,n-1);
    }
    return det;
}


int main(){
    int n,A[10][10];
    cout<<"Enter the order of the matrix\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        cin>>A[i][j];
    }
    cout<<"determinant = "<<determinant(A,n);


   return 0;
}