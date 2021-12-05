#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <wchar.h>
#include <uchar.h>

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    printf("Задача №1\n");
    double k1, k2, k3;
    k1 = 2+3;
    k2 = 4.5*56;
    k3 = 2/3.0;
    printf("Результати дорівнює : \n");
    printf("%lf\n%lf\n%lf", k1,k2,k3);

}
