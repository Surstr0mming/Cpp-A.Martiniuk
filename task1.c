#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <wchar.h>
#include <uchar.h>

int main(){
    //задаємо можливість виводу тексту українською мовою з кодуванням UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    printf("Задача №1\n");
    double k1, k2, k3;//оголошення змінних типу 'чисел з плаваючою крапкою' для запису значень обчислення виразу
    k1 = 2+3;//обчислюємо значення першого виразу та присвоюємо його значення змінній k1
    k2 = 4.5*56;//обчислюємо значення першого виразу та присвоюємо його значення змінній k2
    k3 = 2/3.0;//обчислюємо значення першого виразу та присвоюємо його значення змінній k3
    printf("Результати дорівнює : \n");//вивід трьох результатів чисел з плаваючою крапкою
    printf("%lf\n%lf\n%lf", k1,k2,k3);

}
