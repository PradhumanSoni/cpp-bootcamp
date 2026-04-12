#include <iostream>
using namespace std;
class sample{
    int a,b;
    public:
    sample(int a, int b){
        this->a = a;
        this->b = b;
    }
    friend float mean(sample);
};

float mean(sample s){
    return (s.a + s.b)/2.0;
}

int main(){
    sample X(34,45);
    cout<<"Mean -> "<<mean(X)<<endl;
}
