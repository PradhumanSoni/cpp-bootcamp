#include <iostream>
#include <cmath>
using namespace std;

struct point{
    float x_cord;
    float y_cord;
};
int main(){
    point P[2];
    for(int i=1;i<=2;i++){
        cout<<"Enter points"<<i<<endl;
        cout<<"Enter x and y coordinate"<<endl;
        cin>>P[i].x_cord>>P[i].y_cord;
    }
    cout<<"The Distance between the points is given by :\n";
    cout<<sqrt((P[1].x_cord-P[2].x_cord)*(P[1].x_cord-P[2].y_cord)+(P[1].y_cord-P[2].y_cord)*(P[1].y_cord-P[2].y_cord));

    return 0;
}