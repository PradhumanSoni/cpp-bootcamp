#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter i and j\n";
    cin>>a>>b;
    int A[a][b];
    cout<<"Enter the elements -->\n";
    for (int i= 0;i<a;i++)
        for (int j=0;j<b;j++)
        {
            cin>>A[i][j];
        }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            cout << A[i][j] << " ";
        cout << endl;
    }


    return 0;
}
