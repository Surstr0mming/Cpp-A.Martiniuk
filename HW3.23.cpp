#include <iostream>
#include <cmath>
using namespace std;


float SinC(float x){
    float m;
    if (x==0){
        m=1;
    }
    else{
        m=sin(x)/x;

      }
    return m;
}

int main() {
    float x;
    cout<<"x=";
    cin>>x;
    cout << "Sinc(x) = "<< SinC(x) << endl;
    return 0;
}
