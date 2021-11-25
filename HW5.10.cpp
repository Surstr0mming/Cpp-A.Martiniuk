#include <iostream>
#include <cmath>
using namespace std;

float sum(int n){
    float a2 = 1, a, S = 0;
    int i, f=1;
    a=a2;
    for (i = 1; (i <= n); i++){
        if (n<1){
            cout<<"Write correct number";
        }
        else if (i>=1 and i<=2){
            cout<<"i1="<<i<<endl;
            f *= i;
            cout<<"f1="<<f<<endl;
            S += f;
            cout<<"S1="<<S<<endl;
        }
        else{
            cout<<"i2="<<i<<endl;
            f *= i;
            cout<<"f2="<<f<<endl;
            a = a + a/pow(2,i);
            cout<<"a2="<<a<<endl;
            S += f/a;
            cout<<"S2="<<S<<endl;
        }
    }
    return S;
}


int main() {
    int n;
    cout<<"n=";
    cin>>n;
    cout <<"Result = "<< sum(n) << endl;
    return 0;
}