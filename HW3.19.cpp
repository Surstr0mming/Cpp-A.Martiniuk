#include <iostream>
using namespace std;


int one(int n, int k, int m)
{
    int res =1;
    if (n % m==0 && k % m==0){
        return res;
    }
    else
        return 0;
}

int main()
{
    int n, k, m;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    cout << "m=";
    cin >> m;
    if (one(n,k,m)==1)
    {
        cout<<1;
    }
    return 0;
}
