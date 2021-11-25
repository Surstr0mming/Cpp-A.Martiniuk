#include <iostream>
using namespace std;

int main()
{
    int n;
    float b;
    cout<<"n=";
    cin>>n;
    cout<<"b=";
    cin>>b;
    for (int i = 0; i<n; i++){
        b+=1/b;
    }
    cout << b;

    return 0;
}