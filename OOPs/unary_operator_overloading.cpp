#include <iostream>
using namespace std;
class c1{
    private:
    int p;
    public:
    c1(int a){
        p = a;
    }
    void operator-(){
        p = -p;
    }
    void display(){
        cout<<p;
    }
};
int main(){
    c1 c(45);
    c.display();
    -c;
    c.display();
    return  0;
}