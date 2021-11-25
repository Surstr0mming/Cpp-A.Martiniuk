#include <iostream>
using namespace std;

float dob(float n){
    float p = 1, pk, b = 1, bk, i;
    for (i = 1; i <=n; i++){
        bk = b* (1/i);
        b = bk;
        pk = p*(1+b);
        p = pk;
    }
    return p;
}

int main() {
    cout <<"Result = "<< dob(5) << endl;
    return 0;
}