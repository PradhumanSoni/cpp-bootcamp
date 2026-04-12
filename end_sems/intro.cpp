#include <iostream>
using namespace std;
class item{
    string name;
    float cost;
    public:
    void getdata(string n, float c);
    void setdata();
};

void item::getdata(string n, float c){
    name = n;
    cost = c;
}
void item::setdata(){
    cout<<"Name of the Item : "<<name<<"\n";
    cout<<"Cost of the Item : "<<cost<<"\n";
}

int main(){
    item i1,i2;
    i1.getdata("Ras Malai",500.45);
    i2.getdata("Jalebi", 45.56);
    i1.setdata();
    i2.setdata();
    return 0;
}