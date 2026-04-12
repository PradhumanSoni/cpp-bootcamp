#include <iostream>
using namespace std;
class alpha{
    int x;
    public:
    alpha(int i){
        x = i;
        cout<<"Constructor alpha initialized"<<endl;
    }
    void show_x(){
        cout<<"x is -> "<<x<<endl;
    }
};
class beta{
    int y;
    public:
    beta(int k){
        y = k;
        cout<<"Constructor beta initialized"<<endl;
    }
    void show_y(){
        cout<<"y is -> "<<y<<endl;
    }
};

class gamma: public beta, public alpha{
    int m,n;
    public:
    gamma(int a, int b, int c, int d):alpha(a), beta(b) 
    {
        m = c;n = d;
        cout<<"gamma constructor initialized"<<endl;
    }
    void display(){
        show_x();
        show_y();
        cout<<"m is -> "<<m<<endl;
        cout<<"n is -> "<<n<<endl;
    }
};

int main(){
    gamma g(2,3,4,5);
    g.display();
}