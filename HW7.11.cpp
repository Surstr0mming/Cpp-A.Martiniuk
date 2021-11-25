#include <iostream>

using namespace std;

double Ermit(int n, double x, double *hn){

    double h0=1, h1=2*x;

    for (int i = 2 ; i <= n ; i++ ){

        hn[i] = 2 * x * h1 - 2 * (i - 1) * h0;
        h0 = h1;
        h1 = hn[i];
    }
    return h1;
}



int main() {
    int n;
    double x, hn[256];
    cout << "Enter n(n<256) :";
    cin >> n;
    cout << "Enter x = ";
    cin >> x;
    cout << Ermit(n,x,hn);
} 