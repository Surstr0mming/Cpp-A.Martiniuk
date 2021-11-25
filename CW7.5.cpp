#include <iostream>
#define N 5
using namespace std;
int Odd(int a[], unsigned n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] & 1)
            s += a[i];
    }
    return s;
}

int Even( int a[], unsigned n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (!(a[i] & 1))
            s += a[i];
    }
    return s;
}


using namespace std;
int main() {
    int a[N];
    for (int i=0; i<N; i++) {
        std::cout << "a[" << i+1 << "] = ";
        cin >> a[i];
    }
    cout << "Sum of ogg number equal to " << Odd(a, N) << endl;
    cout << "Sum of even numbers equal to " << Even(a, N) << endl;
}