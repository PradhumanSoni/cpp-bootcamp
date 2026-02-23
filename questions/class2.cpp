#include <iostream>
using namespace std;

class cylinder{
    private:
        int r,n;
    public:
        void getdata(void){
            cout<<"Enter the radius and height\n";
            cin>>r>>n;
        };
        void display(){
            cout<<"Radius : "<<r<<endl;
            cout<<"Height : "<<n<<endl;
        };

        double v,sa;
        void final(void){
            double v,sa;
            const float PI = 3.141;
            v = PI*r*r*n;
            sa = 2*PI*r*n;
            cout<<"Volume : "<<v<<endl;
            cout<<"Surface Area : "<<sa<<endl;
        }
};





int main(){
    cylinder c1;
    c1.getdata();
    c1.display();
    c1.final();



    return 0;
}