#include<locale.h>
#include <fcntl.h>
#include <wchar.h>
#include <uchar.h>
#include <windows.h>
#include <io.h>
#include <stdio.h>
int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    printf("Задача №2\n");
    printf("Введіть ім'я :");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name[20];

    scanf("%s",&name);
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    printf("Привіт ");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("%s", name);
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    printf("!");
}
