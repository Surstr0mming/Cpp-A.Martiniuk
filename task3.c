#include<locale.h>
#include <fcntl.h>
#include <fcntl.h>
#include <windows.h>
#include <io.h>
#include <stdio.h>
#include <wchar.h>
#include <uchar.h>

int main(){

    SetConsoleCP(65001); //задаємо можливість виводу тексту українською мовою з кодуванням UTF-8
    SetConsoleOutputCP(65001);
    printf("Задача №3\n");
    int money;//оголошення цілочисельних змінних
    int coins;
    printf("Введіть кількість гривень\n");
    scanf("%d", &money);//введення суми в гривнях, яку слід задавати в різних локалях
    printf("Введіть кількість копійок\n");
    scanf("%d", &coins);//введення суми в копійках, яку слід задавати в різних локалях
    if (coins>=100){//перетворення суми грошей в коректну форму
        money = money + coins/100;
        coins = coins % 100;

    }


    SetConsoleCP(65001); //задаємо можливість виводу тексту українською мовою з кодуванням UTF-8
    SetConsoleOutputCP(65001);
    printf("В українській локалі:\n");//вивід в українській локалі
    printf("%d", money);
    printf(" гривні ");
    printf("%d", coins);
    printf(" копійок ₴\n");
    printf("В американській локалі:\n");//вивід в американській локалі
    printf("%d", money);
    printf(" dollars ");
    printf("%d", coins);
    printf(" cents $\n");
    printf("В англійській  локалі:\n");//вивід в британській локалі
    printf("%d", money);
    printf(" pound ");
    printf("%d", coins);
    printf(" pence ₤\n");

}
