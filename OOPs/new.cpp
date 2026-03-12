#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    int max = (a>b>c)?a:((b>c)?b:c);
    cout<<"Max = "<<max<<endl;
    return 0;
}