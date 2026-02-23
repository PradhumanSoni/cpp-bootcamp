#include <iostream>
using namespace std;
class Student
{
    private:
    int marks;
    char name[30];
    void grade()
    {
        if(marks>=50){
            cout<<"Result : Pass"<<endl;
        }else{
            cout<<"Result : Fail"<<endl;
        }
    }

    public:
    void getdata()
    {
        cout<<"Enter the Name of the Student: "<<endl;
        cin>>name;
        cout<<"Enter the marks of the student"<<endl;
        cin>>marks;
    }

    void display()
    {
        getdata();
        grade();
    }
};

int main()
{
    Student c1;
    c1.display();
    return 0;
}