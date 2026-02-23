#include <iostream>
using namespace std;

float square(float n){
    return n*n;
}
float double_squared(float k){
    return 2*square(k);
}

int main(){

    float n=6.5;
    float result = double_squared(n);

    cout<<result<<endl;
    return 0;
}