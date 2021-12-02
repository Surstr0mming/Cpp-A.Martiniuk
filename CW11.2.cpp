#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const char* fname="F";
    FILE* F=fopen(fname, "wb");
    if(F==nullptr){
        fprintf(stderr, "Error %s",fname);
        return -1;
    }
    int n;
    cout << "Enter n = ";
    cin >> n;
    double x;
    for(int i=0;i<n;i++){
        cout << "Enter x[" << i+1 << "] = ";
        cin >> x;
        fwrite(&x, sizeof(x), 1, F);
    }
    fclose(F);
    double a;
    cout << "Eneter a = ";
    cin >> a;
    F=fopen(fname, "rb");
    double mas[10];
    const char* fname2="G";
    FILE* G=fopen(fname2, "wb");
    int i=0;
    int k=0;
    while (true) {
        if(feof(F))break;
        fread(&x,sizeof(x),1,F);
        if (fabs(x)<a){
            fwrite(&x, sizeof(x), 1, G);
        }
        else{
            mas[k++]=x;
        }
        i++;
    }
    fclose(F);
    fclose(G);


    G=fopen(fname2, "rb");
    i=0;
    while (true) {
        if (feof(G)) break;
        fread(&x,sizeof(double),1,G);
        cout << " x[" << i++ << "] = " << x << ", " ;
    }
    fclose(G);


    F=fopen(fname, "wb");

    fwrite(mas, sizeof(double), k, F);

    F=freopen(fname, "rb", F);
    i=0;
    cout << endl;
    while (true) {
        if (feof(F)) break;
        fread(&x,sizeof(double),1,F);
        cout << "x[" << i++ << "] = " << x << ", ";
        printf("x%d=%lf, ",i++,x);
    }
    fclose(F);
} 