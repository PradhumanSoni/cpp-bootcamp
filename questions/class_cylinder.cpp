#include <iostream>
using namespace std;

class Cylinder
{
    private:
    double r,h;
    public:
    void getdata()
    {
        cout<<"Enter the base radius : "<<endl;
        cin>>r;
        cout<<"Enter the Height : "<<endl;
        cin>>h;
    }

    void display()
    {
        cout<<"Base Radius : "<<r<<endl;
        cout<<"Height : "<<h<<endl;
    }

    void vs()
    {
        const float pi = 3.141;
        double v,sa;
        cout<<"Volume :"<<pi*r*r*h<<endl;
        cout<<"Surface Area: "<<2*pi*r*(r+h)<<endl;
    }
};

int main(){
    Cylinder c1;
    c1.getdata();
    c1.display();
    c1.vs();
    return 0;
}