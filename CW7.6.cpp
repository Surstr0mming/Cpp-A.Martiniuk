#include <iostream>
#define N 20
using namespace std;

int Input(double masive[], int size){
    int i;
    for (i=0; i<size; i++){
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

int Sum(double masive1[], double masive2[], double add[], unsigned n) {
    unsigned i;
    for (i=0; i<n; i++) {
        add[i] = masive1[i]+masive2[i];
        cout << "masive[" << i+1 << "] = " << add[i] << endl;
    }
}


double Multiple(double masive1[N], double masive2[N], unsigned n) {
    double res = 0;
    unsigned i;
    for (i=0; i<n; i++) {
        res += masive1[i]*masive2[i];

    }
    cout << res << endl;
    return res;
}


int main() {
    double masive1[N], masive2[N], add[N];
    unsigned n;
    cout << "n = ";
    cin >> n;
    cout << "Write first vector"<< endl;
    Input(masive1, n) ;
    cout << "Write second vector"<< endl;
    Input(masive2, n);
    cout << " Scalar multiply of two vector is " ;
    Multiple(masive1, masive2, n) ;
    cout << "Sum  of two vector is " << endl;
    Sum(masive1, masive2, add, n);
}



