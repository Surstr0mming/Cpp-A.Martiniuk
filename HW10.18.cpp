#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

typedef struct {
    double xa;
    double xb;
    double xc;
    double ya;
    double yb;
    double yc;
    int as;
    int bs;
    int cs;

} triangle;


triangle Input() {
    triangle a;
    cout << "Enter x coordinate :";
    cin >> a.xa;
    cout <<" a.xa1 = " << a.xa;
    cout << "Enter Y coordinate :";
    cin >> a.ya;
    cout << "Enter type of system (1 - polar, 0 - cartesian) :";
    cin >> a.as;
    cout << "Enter x coordinate :";
    cin >> a.xb;
    cout << "Enter Y coordinate :";
    cin >> a.yb;
    cout << "Enter type of system (1 - polar, 0 - cartesian) :";
    cin >> a.bs;
    cout << "Enter x coordinate :";
    cin >> a.xc;
    cout << "Enter Y coordinate :";
    cin >> a.yc;
    cout << "Enter type of system (1 - polar, 0 - cartesian) :";
    cin >> a.cs;
    return a;
}


int square(triangle a){
    double S;
    if (a.as == 1){
        a.xa = a.xa * cos(a.ya);
        a.ya = a.xa * sin(a.ya);
    }
    if (a.bs == 1){
        a.xb = a.xb * cos(a.yb);
        a.yb = a.xb * sin(a.yb);
    }
    if (a.cs == 1){
        a.xc = a.xc * cos(a.yc);
        a.yc = a.xc * sin(a.yc);
    }

    S = ((a.xa * a.yb + a.xb * a.yc + a.xc * a.ya)-(a.ya * a.xb + a.yb * a.xc + a.yc * a.xa))/2;
    if (S <0){
        S = S * (-1);
    }

    return S;
}


int main() {
    triangle p;
    p = Input();
    cout << "Square = " << square(p) << endl;


}


