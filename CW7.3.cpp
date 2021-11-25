#include <iostream>
#include <cmath>
#define N 10
using namespace std;

double Sum(const double masive[N]){
    double sum = 0, e=M_E ;
    for(int i=0; i<N; i++){
        if(masive[i]> e)
            sum+= masive[i];

    }
    return sum;
}

int main(){
    double masive[N];
    for(int i=0;i<N;i++){
        cout << "masive["<< i << "]" << " = " ;
        cin >> masive[i];

    }
    cout << " Sum = " << Sum(masive);
}