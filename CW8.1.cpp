#include <iostream>
using namespace std;

#define t 3

void Output(int a[t][t]) {
    int k,n;
    for (k=0; k<t; k++) {
        for (n=0; n<t; n++) {
            cout << a[k][n] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int ChangeEl(int a[t][t], int N, int M) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (a[i][j] == M)
                a[i][j] = N;
        }
    }
    return 0;
}

int main() {
    int N,M, a[t][t] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    cout << "Enter n = ";
    cin >> N;
    cout << "Enter m = ";
    cin >> M;
    ChangeEl(a, N, M);
    cout << "New matrix: \n";
    Output(a);
}