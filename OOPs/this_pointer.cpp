#include <iostream>
using namespace std;
class Distance{
    int metre, cm;
    public:
    Distance(int metre = 0, int cm = 0){
        this->metre = metre;
        this->cm = cm;
    }
    Distance add(Distance d){
        Distance temp;
        temp.cm = cm + d.cm;
        temp.metre = metre + d.metre + temp.cm/100;
        temp.cm = temp.cm%100;
        return temp;
    }
    void display(){
        cout<<metre<<"m "<<cm<<"cm"<<endl;
    }
};

int main(){
    Distance d1(5,67),d2(34,68),d3;
    d3 = d1.add(d2);
    d1.display();
    d2.display();
    cout<<endl;
    d3.display();

}