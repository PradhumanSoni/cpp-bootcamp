#include <iostream>
using namespace std;
class Test{
    int x,y,z;
    public:
    Test():x(0),y(0),z(0){}
    Test &set_x(int x){
        this->x=x;
    } 
    Test& set_y(int y){
        this->y=y;
    }
    Test& set_z(int z){
        this->z=z;
    }
    Test& show(){
        cout<<"x->"<<x<<" y->"<<y<<" z->"<<z<<endl;
    }
};
int main(){
    Test t;
    t.set_x(34).set_y(45).set_z(56).show();
}