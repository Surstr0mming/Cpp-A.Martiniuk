#include <iostream>
using namespace std;
const int N = 100;

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
            cout<<"a["<<i+1<<"]"<<"["<<j+1<<"] = ";
            cin>>a[i][j];
        }

    }
}

void transp(int a[N][N], int n, int m) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            int x = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = x;
        }
    }

}


int main()
{
    int n,m,a[N][N];
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    if (m<1  and n<1){
        cout << "Enter correct number of strings and columns";
    }
    else if (m<1 ){
        cout << "Enter correct number of columns";
    }
    else if (n<1 ){
        cout << "Enter correct number of strings ";
    }
    else{
        Input(a,n,m);
        cout<<"Matrix:"<<endl;
        transp(a,n,m);
        Output(a,n,m);
    }
    return 0;
}