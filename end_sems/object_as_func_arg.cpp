#include <iostream>
using namespace std;
class Time{
    int hour,mins;
    public:
    Time(int hour=0, int mins=0){
        this->hour = hour;
        this->mins = mins;
    }
    void display(){
        cout<<hour<<" hr "<<mins<<" mins\n";
    }
    void add(Time t1, Time t2){ // when add is a member function 
        hour = t1.hour + t2.hour + (t1.mins+t2.mins)/60;
        mins = (t1.mins + t2.mins)%60;
    }
};

int main(){
    Time t1(3,56),t2(5,45),t3;
    t3.add(t1,t2);
    t1.display();
    t2.display();
    cout<<"\nAddition \n";
    t3.display();
    return 0;
}

