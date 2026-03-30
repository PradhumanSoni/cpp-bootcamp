#include <iostream>
using namespace std;
class Bank{
    string name;
    int account_number;
    int balance;
    public:
    Bank(string name, int account_number, int balance){
        name = name;
        account_number = account_number;
        balance = balance;
    }
};

int main(){
    Bank b("rohit",123,567);
    return 0;
}