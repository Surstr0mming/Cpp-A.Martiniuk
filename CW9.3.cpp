#include <iostream>
#include <cstdlib>
using namespace std;

int* Input(unsigned n){
    int * v = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        cout << "v[" << i + 1 << "] " << " = ";
        cin >> v[i];
    }
    return v;
}

int* substructure(const int *a, const int *b, int n){
    int* dif = (int*) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        dif[i] = a[i] - b[i];
    }
    return dif;
}

int main(){
    int n;
    cout << "Enter number of elements in both vectors : ";
    cin >> n;
    int *a, *b, *dif;
    cout<<"Enter  first vector :\t" << endl;
    a = Input(n);
    cout<<"Enter second vector :\t " << endl;
    b = Input(n);
    dif = substructure(a,b,n);
    for (int i = 0; i<n; i++){
        cout<< endl << " dif["<< i + 1 << "] " << " = "<< dif[i];
    }
    free(a);
    free(b);
    free(dif);
}