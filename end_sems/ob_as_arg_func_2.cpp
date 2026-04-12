#include <iostream>
using namespace std;
class Matrix{
    int size;
    int a[5][5];
    public:
    Matrix(int size){
        this->size = size;
    }
    void getdata(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cin>>a[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend Matrix add(Matrix , Matrix);
};
Matrix add(Matrix m1,Matrix m2){
    int size;
    cout<<"Enter size\n";
    cin>>size;
        Matrix temp(size);
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                temp.a[i][j] = m1.a[i][j] + m2.a[i][j];
            }
        }
        return temp;
    }

int main(){
    Matrix m1(3),m2(3);
    cout<<"Enter Matrix 1\n";
    m1.getdata();
    cout<<"Enter Matrix 2\n";
    m2.getdata();
    Matrix m3 = add(m1,m2);
    cout<<"add Matrix\n";
    m3.display();
    return 0;
}