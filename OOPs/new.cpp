#include <iostream>
using namespace std;
class Student{
    int *marks;
    int n;
    public:
    Student(int size){
        n = size;
        marks = new int[n];
        cout<<"Enter "<<n<<"marks"<<endl;
        for(int i=0;i<n;i++){
            cin>>marks[i];
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<marks[i]<<" ";
        }
    }
    ~Student(){
        delete[] marks;
        cout<<"Desturtor freed the meemory!";
    }
};

int main(){
    Student s(3);
    s.display();
}