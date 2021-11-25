#include <iostream>
using namespace std;

#define N 3

void Output(int a[N][N]) {
    int i,j;
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            cout << a[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void ReplaceEl(int a[N][N], int i, int j, double m) {
    a[i][j] = m;
}

int main() {

    int i,j;
    double m;
    int a[N][N] = {{1, 2,3,}, {4,5,6}, {7,8,9} };
    cout << "Enter i(string, 1<=i<=3) = ";
    cin >> i;
    cout << "Enter j(column, 1<=i<=3) = ";
    cin >> j;
    cout << "Enter m(replace number, double) = ";
    cin >> m;
    Output(a);
    if ((i<1 or i>3) and (j<1 or  j>3)){
        cout << "Enter correct string and column" << endl;
    }
    else if (i<1 or i>3){
        cout << "Enter correct string" << endl;
    }
    else if (j<1 or  j>3){
        cout << "Enter correct column " <<endl;
    }
    else{
        ReplaceEl(a, i-1, j-1, m);
        cout<<"Result: \n";
        Output(a);

    }
}