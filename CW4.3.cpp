#include <iostream>
using namespace std;


double clca(int n,double x) {
    double resa, doda;
    resa = 1;
    doda = 1;
    for (int i = 0; i < n; i++) {
        doda *= x;
        resa += doda;
    }
    return resa;

}
double clcb(int n,double x, double y) {
    double resb, dodb;
    resb = 1;
    dodb = 1;
    for (int i = 0; i < n; i++) {
        dodb *= x;
        dodb *= x;
        dodb *= y;
        resb += dodb;
    }
    return resb;
}

int main() {
    cout<<"a)\n" <<"Result = "<< clca(3, 2) << endl;
    cout<<"b)\n" <<"Result = "<< clcb(4,1,2)<<endl;
    return 0;

}