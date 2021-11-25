#include <iostream>
using namespace std;


int main() {
    int n,f=1;
    double x, k, sum;
    cout<<"n=";
    cin>>n;
    cout<<"x=";
    cin>>x;
    sum = 1;
    k=1;
    if (x>-1 and x<1 and n>=0){
        for (int i=1; i<n ; i++){
            k*=x;
            f*=i;
            cout<<"k=\n"<<k<<endl<<"f=\n"<<f<<endl;
            sum = sum +k/f;
        }
        cout<<"Result = "<<sum<<endl;
    }
    else
        cout<<"Run the program again and enter the correct values";
}
