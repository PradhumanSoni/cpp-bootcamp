#include <iostream>
using namespace std;

class student{
    char name[20];
    char branch[20];
    int roll;
    public:
        void getdata(void){
    cout<<"Enter Name\n";
    cin>>name;
    cout<<"Enter branch\n";
    cin>>branch;
    cout<<"Enter roll no\n";
    cin>>roll;
    };
        void display(void){
    cout<<"Name : "<<name<<endl;
    cout<<"Branch : "<<branch<<endl;
    cout<<"Roll No : "<<roll<<endl;
    };

};

int main(){
    student p[2];
    for(int i =0;i<2;i++)
    {   
        cout<<"Enter the details of student "<<i+1<<endl;
        p[i].getdata();
    }
    for(int i=0;i<2;i++){
        p[i].display();
    }
    return 0;
}