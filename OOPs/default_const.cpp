#include <iostream>
#include <vector>
using namespace std;
class Student{
    int *marks;
    int n;
    public:
    Student(int n){
        marks = new int(n);
        
    }

    void display(){
        cout<<"Marks are :";
        cout<<*marks;
        cout<<endl;
    }

    ~Student(){
        delete[] marks;
        cout<<"Memory Released!"<<endl;
    }
};

int main(){
    int size;
    cout<<"Enter the no. of Subjects: "<<endl;
    cin>>size;
    Student s1(5);
    s1.display();

    return 0;
}