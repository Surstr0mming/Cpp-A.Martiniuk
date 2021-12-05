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

    cout << endl << "Задача №3";
    int money,  coins;
    cout << "Введіть кількість гривень";
    cin >> money;
    cout << "Введіть кількість копійок";
    cin >> coins;
    cout << "В українській локалі : ";
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << endl << money << " гривні " << coins << " копійок ₴" << endl;
    cout << "В американській локалі : ";
    cout << money << " dollars " << coins << " cents $" << endl;
    cout << "В англійській локалі : ";
    SetConsoleCP(856);
    SetConsoleOutputCP(856);
    cout << money << " pounds " << coins << " pence ₤" << endl;
}
