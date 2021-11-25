#include <iostream>
#include <cmath>
using namespace std;

float clc(float x, float eps){
    float an = 1.0, i = 0, s = 0.0;
    if (x>-1 and x<1){
        while (fabs(an) > eps) {
            s += an;
            i += 1;
            an = pow(-1,i+1)  * pow(x,i-1);
        }
        return s;
    }
    else{
        cout<<"Write correct x(|x|<1)";
    }
}

int main() {
    float x, eps;
    cout<<"x = ";
    cin>>x;
    cout<<"eps = ";
    cin>>eps;
    cout <<"Result = "<< clc(x, eps) << endl;
    return 0;
}