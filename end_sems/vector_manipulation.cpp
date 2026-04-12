#include <iostream>
using namespace std;
class vector{
    int v[10];
    int size;
    public:
    vector(int s){
        size = s;
        v[10]=0;
        int a=0;
        set_vector();
        do{
            cout<<"Vector Window---\n";
            cout<<"1. Create a Vector\n";
            cout<<"2. Display the Vector\n";
            cout<<"3. Modify a single value\n";
            cout<<"4. Multiply a Scaler\n";
            cout<<"5. Exit the Window\n";
            cout<<"Enter the Operation ->";
            cin>>a;
            switch(a){
                case 1: set_vector();break;
                case 2: display();break;
                case 3: modify_value();break;
                case 4: multiply_scaler();break;
                case 5: cout<<"Exiting the Window!!";break;
            }

        }while(a!=5);
    }
    void set_vector();
    void modify_value();
    void multiply_scaler();
    void display();
};

void vector::set_vector(){
    cout<<"Enter the vector of length -> "<<size;
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
}
void vector::display(){
    cout<<"( ";
    for(int i=0;i<size;i++){
        cout<<v[i]<<", ";
    }
    cout<<" )";
}
void vector::modify_value(){
    int tmp = 0;
    int new_val = 0;
    cout<<"Enter the value to change -> ";
    cin>>tmp;
    cout<<"Enter the new value ->";
    cin>>new_val;
    for (int i=0;i<size;i++){
        if (v[i]==tmp){
            v[i]==new_val;break;
        }else{cout<<"Entered value not in Vector !!";}
    }
}

void vector::multiply_scaler(){
    int scaler=0;
    cout<<"Enter the scaler to multiply -> ";
    cin>>scaler;
    for(int i=0;i<size;i++){
        v[i] = v[i]*scaler;
    }
}

int main(){
    vector v(5);
    return 0;

}
