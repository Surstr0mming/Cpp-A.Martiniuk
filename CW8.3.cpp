#include <iostream>
using namespace std;

const int N=20;

void Output(int a[N][N], int n, int m) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Input(int a[N][N], int n, int m) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }
}



int main()
{
    int n,m;
    cout<<" Enter number of strings from 1 to 20, n = ";
    cin>>n;
    cout<<"Enter number of columns from 1 to 20, m = ";
    cin>>m;
    int a[N][N];
    if ((m<1 or m>20) and (n<1 or n>20)){
        cout << "Enter correct number of strings and columns";
    }
    else if (m<1 or m>20){
        cout << "Enter correct number of columns";
    }
    else if (n<1 or n>20){
        cout << "Enter correct number of strings ";
    }
    else{
        Input(a,n,m);
        cout<<"New matrix: \n" <<endl;
        Output(a,n,m);
        return 0;
    }

}