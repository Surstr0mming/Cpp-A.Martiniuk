#include <iostream>
using namespace std;

int main()
{
    double n,s,a;
    cout<<"a=";
    cin >> a;
    n=1; s=0;
    while (s < a)
    {
        s+=1/n++;
    }
    cout<<"\n"<<s;
    return 0;
}