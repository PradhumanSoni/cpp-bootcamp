#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //space
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=2*row-1){
            cout<<row;
            col+=1;
        }
        //space
        int lspace=n-row;
        while(lspace){
            cout<<" ";
            lspace--;
        }   
        cout<<endl;
        row+=1;
    }
    return 0;
}