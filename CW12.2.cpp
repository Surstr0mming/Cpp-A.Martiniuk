#include <iostream>
#include <cstdlib>
#define N 10000
using namespace std;

int main() {
    int i;
    char str[11];
    unsigned n=0, mas[N];
    unsigned long long sum=0L;
    cout << " Enter a string : " << endl;
    while (cin.get(str,11)){
        mas[n]=atol(str);
        sum+=mas[n];
        n++;

    }
    for (i=0; i<n; i++) {
        cout << " mas[" << i + 1 << "] = " << mas[i] << endl;
    }
    cout << " Sum of all arrays = " << sum ;
    return 0;
}