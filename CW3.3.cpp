#include <stdio.h>
#include <cmath>
int main()
{
    long long int a,b,c;
    scanf("%lld, %lld, %lld",&a,&b,&c);
    printf("a)\n");
    if (std::abs(a) >= pow(2, 10) || std::abs(b) >= pow(2, 10) || std::abs(c) >= pow(2, 10))
        printf("Condition rejected\n");
    else
        printf("%lld", a * b * c);
    return 0;
}
