#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int Input(int** a) {
    *a = (int*) malloc(0 * sizeof **a);
    int n = 0;
    if (*a) {
        while (n < 100) {
            int m;
            cout << "Enter a[" << n+1 <<"] element: ";
            cin >> m;
            if (m == 0)
                break;
            n+=1;
            *a = (int*) realloc(*a, n * sizeof **a);
            if (*a == nullptr)
                exit(1);
            (*a)[n - 1] = m;
        }
    }
    return n;
}

void num( int n) {
    int k = 0;
    for (int i = 0; i <= n; i++)
        k += 1;
    cout<<k;
}


int num_of_squares(int* a, int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        double sq = sqrt(a[i]);
        if (sq == floor(sq))
            k += 1;
    }
    return k;
}


int num_of_cubes(int* a, int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        double cb = cbrt(a[i]);
        if (cb == floor(cb))
            k += 1;
    }
    return k;
}


int main() {
    int* a, n;
    n= Input(&a);
    cout<<"Number of elements: ";
    num(n);
    cout << endl << "Number of full squares : " << num_of_squares(a, n) << endl;
    cout << "Number of full cubes : " << num_of_cubes(a, n) << endl;
    free(a);


    return 0;
}