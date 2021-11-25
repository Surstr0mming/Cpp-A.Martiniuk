

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Input(double masive[], double n){
    int i;
    for (i=0; i<n; i++){
        cout << "masive[" << i+1 << "] = ";
        cin >> masive[i];
    }
    return 0;
}

int Output(const double masive[], int size){
    int i;
    for (i=0; i<size; ++i){
        cout <<  masive[i];
    }
    return 0;
}


int main() {
    int n;
    double *masive;
    int i, count ;
    cout << "n = " ;
    cin >> n;
    Input(masive, n);
    int N=1000;

    vector <int>v(N);
    for (size_t i = 1; i < N; ++i){
        if(i == 1){
            v[i] = 0;
        }
        else{
            v[i] = i;
        }
    }
    for (size_t i = 2; i < N; ++i){
        if(v[i] != 0){
            for(size_t j = 2 * i; j < N; j+=i){
                v[j] = 0;
            }
        }
    }
    for (auto x : v){
        if (x != 0){
            cout << "x=" << x << endl;
            for (int i = 0; i <n; i++){
                if (pow(x, 2) == masive[i]){
                    count+=1;
                }
            }
        }
    }


    return 0;

}
