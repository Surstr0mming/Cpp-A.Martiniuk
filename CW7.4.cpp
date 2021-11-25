#include <iostream>
#define N 5
using namespace std;
int main(){
    int mas[N], max = 0;

    for (int i=0; i<N; i++){
        cout << "a[" << i << "] = ";
        cin >> mas[i];
    }
    for (int ma : mas){
        if(ma>max)
            max=ma;
    }
    cout << "The biggest element is " << max;
}