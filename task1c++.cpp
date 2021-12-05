#include <iostream>
#include <windows.h>

using namespace std;
int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << "Задача №1" << endl;
    double k1, k2, k3;
    k1 = 2+3;
    k2 = 4.5*56;
    k3 = 2/3.0;
    cout << "Результат дорівнює : " << k1 << "; " << k2 << "; " << k3;
}
