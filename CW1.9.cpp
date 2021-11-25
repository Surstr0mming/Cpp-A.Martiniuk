#include <string>

int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("Arithmetic mean =%f",(a+b)/2);
    printf("\nHarmonic mean =%f",2/(1/a + 1/b));
    printf("\nThe arithmetic mean in the scientific representation =%e",(a+b)/2);
    printf("\nHarmonic mean in the scientific representation =%e",2/(1/a + 1/b));
}