#include <iostream>
using namespace std;
class Student
{   
    char name[30];
    double marks[5];
    
    public:
        Student()
        {
            cout<<"Enter the Name : "<<endl;
            cin>>name;
            cout<<"Enter the marks of each subject: "<<endl;
            for (int i=0;i<5;i++)
            {
                cin>>marks[i];
            }
        }
        void showstudent()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Marks of each subject are :"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<marks[i]<<" ";
                cout<<endl;
            }
            passfail();
        }
        void passfail()
        {   
            double total=0,percentage;
            for(int i=0;i<5;i++)
            {
                total+=marks[i];
            }
            percentage=(total/500)*100;
            if (percentage>=45){
                cout<<"Pass"<<endl;
            }else{
                cout<<"Fail"<<endl;
            }

            showpercent(percentage);
        }
        void showpercent(double m)
        {
            cout<<name<<" has scored : "<<m<<"%"<<endl;
            showgrade(m);
        }
        void showgrade(double percent)
        {
            cout<<"Grade : ";
            if(percent>90) cout<<"S"<<endl;
            else if(percent>80) cout<<"A"<<endl;
            else if(percent>65) cout<<"B"<<endl;
            else if(percent>=45) cout<<"C"<<endl;
            else cout<<"F"<<endl;
        }

};

int main(){
    Student s1;
    s1.showstudent();
    return 0;
}