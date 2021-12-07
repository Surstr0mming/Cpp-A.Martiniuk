#include <iostream>
#include<locale>
#include <codecvt>
#include <cmath>
#include <iostream>
#include<locale.h>
#include <fcntl.h>
#include <fcntl.h>
#include <cstring>
#include <windows.h>
#include <io.h>

using namespace std;
int main(){

    //задаємо можливість виводу тексту українською мовою з кодуванням UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    cout << endl << endl << "Задача №2";
    cout << endl << "Введіть ім'я : ";//виведення тексту українською мовою з кодуванням UTF-8
    SetConsoleCP(1251);//задаємо локаль для введення тексту українською мовою
    SetConsoleOutputCP(1251);
    char name[20];//виділяємо 20 символів для введення імені українською мовою
    cin >> name; //вводимо ім'я українською мовою
    SetConsoleCP(65001); //задаємо можливість виводу тексту українською мовою з кодуванням UTF-8
    SetConsoleOutputCP(65001);
    cout << "Привіт, ";//виведення тексту українською мовою з кодуванням UTF-8
    SetConsoleCP(1251);//задаємо локаль для виведення тексту українською мовою
    SetConsoleOutputCP(1251);
    cout << name;//виводимо ім'я, введене українською мовою
    cout << " !" << endl; //закінчення виводу
}
