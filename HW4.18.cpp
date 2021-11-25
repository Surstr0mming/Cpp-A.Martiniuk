#include <iostream>
using namespace std;


int main() {
    int m,k,f=1;
    double x, xk;
    double n;
    cout<<"k=";
    cin>>k;
    cout<<"x=";
    cin>>x;
    m=-1;
    for (int i=1; i<=k; i++){
        m*=m;
        f*=2*i;
        n=x*x;
        xk=m*n/f;
    }

    cout<<"Result = "<<xk<<endl;
}
