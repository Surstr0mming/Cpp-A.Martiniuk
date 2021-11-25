#include <iostream>

using namespace std;
int main()
{
    double sum = 0;
    double x,k;
    int n;
    cout<<"x=";
    cin >> x;
    cout<<"n=";
    cin >> n;
    k=1;
    for (int i=1; i<=n; i++) {
        k *=x;
        sum = sum + i * k;
    }
    cout << "Result = "<< sum << endl;
    return 0;
}