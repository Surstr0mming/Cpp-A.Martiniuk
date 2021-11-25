#include <iostream>
#define N 5
using namespace std;
int main() {
    double x;
    cout << " x = ";
    cin >> x;
    int i, count=0, masive[]={2 ,3 ,4 ,56 ,23};
    for (i=0; i<N; i++){
        if (masive[i]<x){
            count+=1;
            cout << masive[i] << "<" << x << endl;
        }
    }
    if (count==1 or count==0){
        cout << " The number of numbers in the array that is less than " << x << " is " << count << endl;
    }
    else {
        cout << " The number of numbers in the array that is less than " << x << " are " << count << endl;

    }

}
