#include <iostream>
using namespace std;
class Company{
    string name;
    int age;
    public:
    void set_data(){
        cout<<"Enter Name of the employee :"<<endl;
        cin>>name;
        cout<<"Enter Age : "<<endl;
        cin>>age;
    }
    void display(){
        cout<<"Name of the employee : "<<name;
        cout<<", Age : "<<age<<endl;
    }
};

int main(){
    int c_manager, c_workers;
    cout<<"Enter total Managers and workers: ";
    cin>>c_manager>>c_workers;
    Company Manager[c_manager], workers[c_workers];
    for(int i=0;i<c_manager;i++){
        Manager[i].set_data();
        Manager[i].display();
    }
    return 0;

}