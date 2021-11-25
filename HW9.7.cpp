#include <iostream>
#include <cmath>
const int N = 100;
using namespace std;



void Input(int a[N], int n) {
    int i;
    for (i=0; i<n; i++) {
        cout<<"a["<<i+1<<"]= ";
        cin>>a[i];
    }
}

int Degrees_of_2(const int a[N], int n){
    int count = 0, m;
    for (int i = 0; i < n; i++){
        m = 0;
        while (pow(2, m) <= a[i]){
            if (pow(2, m) == a[i]){
                count+=m;
            }
            m++;
        }
    }
    return count;
}


int Degrees_of_3(const int a[N], int n){
    int count = 0, m ;
    for (int i = 0; i < n; i++){
        m = 0;
        while (pow(3,m) <= a[i]){
            if (pow(3,m) == a[i]){
                count+=m;
            }
            m++;
        }
    }
    return count;
}


int main() {
    int n, a[N];
    cout << "Enter natural number of elements in the array:";
    cin >> n;
    Input(a, n);
    cout << "Number of  degrees of 2 :" << Degrees_of_2(a, n) <<endl;
    cout << "Number of  degrees of 3 :" << Degrees_of_3(a, n) <<endl;

}
