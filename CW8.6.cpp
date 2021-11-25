#include <iostream>
using namespace std;

const int M = 100,N = 100;

void Input(int a[N][M], int n, int m) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout<<"a["<<i+1<<"]"<<"["<<j+1<<"] = ";
            cin>>a[i][j];
        }

    }
}
int sum(int a[N][M], int n, int m, int k){
    int s=0;
    int i, j;
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            if ((i - j) == k){
                s+=a[i][j];
            }
        }

    }

    return s;
}


int main()
{
    int n,m,k,a[N][M];
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    if ((m<1 or m>100)  and (n<1 or n>100)){
        cout << "Enter correct number of strings and columns";
    }
    else if (m<1 or m>100){
        cout << "Enter correct number of column";
    }
    else if (n<1 or n>100){
        cout << "Enter correct number of string ";
    }
    else{
        cout<<"k = ";
        cin>>k;
        Input(a,n,m);
        cout<<"Sum = "<<sum(a,n,m,k);
    }

    return 0;
}