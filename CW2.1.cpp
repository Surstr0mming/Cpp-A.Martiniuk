#include <cmath>
#include <cstdio>

double my_cos(double x){
    return cos(x);
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf", my_cos(x));
    return 0;

}
