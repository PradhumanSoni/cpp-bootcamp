#include <iostream>
using namespace std;
class Student{
    public:
    int *roll;
    Student(int roll){
        this->roll = new int(roll);
    }
    Student(const Student& s){
        roll = new int (*s.roll);
        cout<<"Copy Constructor Used\n";
    }
    void display(){
        cout<<"Roll Number -> "<<*roll<<endl;
    }
};

int main(){
    Student s1(23);
    Student s2 = s1;
    s1.display();
    s2.display();
    return 0;
}