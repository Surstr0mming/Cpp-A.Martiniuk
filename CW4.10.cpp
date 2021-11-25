#include <iostream>
using namespace std;

int main(){
    [[maybe_unused]] int n;
    float a;
    a=1;
    while(1 + a != 1){
        a /= 2;
    }

    cout<<"Machine zero:"<<a;
    return 0;
}
