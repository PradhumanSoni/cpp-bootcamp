#include <iostream>
using namespace std;
class Animal{
    string animal_name;
    public:
    void set_name(string n){
        animal_name = n;
    }
    void display_animal(){
        cout<<"Animal : "<<animal_name<<endl;
    }
};

class Dog:public Animal{
    public:
    string name;
    void set_dog(string n){
        name = n;
    }
    void display_dog(){
        cout<<"Dog Name : "<<name<<endl;
    }
};

int main(){
    Dog d;
    d.set_dog("Labrador");
    d.set_name("Doggo");
    d.display_animal();
    d.display_dog();
    return 0;
}