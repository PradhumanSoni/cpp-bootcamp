#include <iostream>
#include <cstring>
using namespace std;
class Student{    
    char *name;
    int age;
    public:
    Student(char*n="Unknown", int a =45){
        age =a;
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }
    void display(){
        cout<<"Name:"<<name<<"Age"<<age<<endl;
    }
    ~Student(){
        delete[] name;
    }
};
int main(){
    int ni;
    cout<<"Enter the number of students"<<endl;
    cin>>ni;
    Student *students = new Student[ni];
    for(int i=0;i<ni;i++){
        char tempname[50];
        int tempage;
        cout<<"Enter name";
        cin>>tempname;
        cout<<"Enter age";
        cin>>tempage;
        students[i] = Student(tempname,tempage);
    }
    for(int i=0;i<ni;i++){
        cout<<"Calling"<<i+1<<endl;
        students[i].display();
    }
    delete[] students;

}
