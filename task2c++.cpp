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


    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    cout << endl << endl << "Задача №2";
    cout << endl << "Введіть ім'я : ";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name[20];
    cin >> name;
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << "Привіт ";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << name;
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << " !" << endl;
}
