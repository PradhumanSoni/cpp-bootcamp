#include <iostream>
using namespace std;
class Bank{
    string name="";
    int acc_num=0;
    float balance=0;
    string acc_type="";
    public:
    Bank(){
        int a;
        setdata();
        display();
        do{
            cout<<"Bank Window ---\n";
            cout<<"1. Deposit Money\n";
            cout<<"2. Withdraw Money\n";
            cout<<"3. Check details\n";
            cout<<"4. Exit\n";
            cout<<"Enter what to do ->";
            cin>>a;
            switch(a){
                case 1: deposit();break;
                case 2: withdraw();break;
                case 3: display();break;
                case 4: cout<<"Exiting !!";break;
                default: cout<<"Enter correct number";
            }
        }while(a!=4);
    }
    void deposit();
    void withdraw();
    void setdata();
    void display();
};
void Bank ::setdata(){
    cout<<"Enter Name -> ";
    cin>>name;
    cout<<"Enter the account number -> ";
    cin>>acc_num;
    cout<<"Enter account type -> ";
    cin>>acc_type;
    cout<<"Enter the balance ->";
    cin>>balance;
}
void Bank::deposit(){
    float amt = 0;
    cout<<"Enter the amount to deposit ->";
    cin>>amt;
    balance = balance + amt;
    cout<<"Money has been deposited!\n";
}
void Bank::withdraw(){
    float amt= 0;
    cout<<"Enter the amount to withdraw ->";
    cin>>amt;
    if(amt<=balance){
        balance = balance - amt;
        cout<<"Money withdrawn !\n";
    }else{cout<<"Low Balance !\n";}
}
void Bank::display(){
    cout<<"Name -> "<<name<<endl;
    cout<<"Account Number -> "<<acc_num<<endl;
    cout<<"Balance ->"<<balance<<endl;
    cout<<"Account Type -> "<<acc_type<<endl;
}
int main(){
    Bank b;
    return 0;
}