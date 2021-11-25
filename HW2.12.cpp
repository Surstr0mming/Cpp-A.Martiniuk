#include <iostream>
using namespace std;

double square( double r, double h){
    return 3.14*r*r*h/3;
}

int main() {
    double r, h;
    scanf("%lf %lf", &r,&h);
    printf("V=%lf", square(r, h));
    return 0;
}
