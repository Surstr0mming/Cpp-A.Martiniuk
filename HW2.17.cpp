#include <iostream>
#include <cmath>
using namespace std;

float signweight(float x){
    float f;
    f=x/(1+ exp(-x));
    return f;
}
float derivative_signweight (float x) {
    float f1;
    f1 = 1 / (1 + exp(-x)) + (x * exp(-x)) / ((1 + exp(-x) )* (1 + exp(-x)));
    return f1;
}
int main()
{
    float x;
    cout<<"x=";
    cin>>x;
    cout<<"signweight(x)="<< signweight(x)<<endl;
    cout<<"derivative_signweight(x)="<<derivative_signweight(x)<<endl;
    return 0;

}
