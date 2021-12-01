#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void input(double* a, int n){
    for(int i=0;i<n;++i){
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}

int writeFile(const char* fname, double* a, int n){
    FILE* file = fopen(fname, "wb");
    int res = fwrite(a, sizeof(*a), n, file);
    fclose(file);
    cout << "Result = " << res << endl;
    return res;
}

int readFile(const char* fname, double* a){
    FILE* file = fopen(fname, "rb");
    double item;
    int k=0;
    while(!feof(file)){
        int res = fread(&item,sizeof(item),1,file);
        if(res!=1)
            break;
        a[k++] = item;
    }
    fclose(file);
    return k;
}

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
    double* array = (double*) malloc(n*sizeof(double));
    input(array,n);
    char filename[30];
    cout << "Enter file name :";
    cin >> filename;

    int res = writeFile(filename,array,n);
    if(res!=n){
        cout << "Not all array was entered";
    }
    else{
        double* array2 = (double*) malloc(n*sizeof(double));

        int m = readFile(filename,array2);
        printf("\n");
        for(int i=0;i<m-1;++i){
            cout << array2[i] << ", ";
        }
        cout << array2[m-1];
        free(array2);
    }
    free(array);
}