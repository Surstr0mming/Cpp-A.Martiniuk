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


    cout << "Задача №4" << endl;
    double a,b, gm;
    cout << "Введіть значення a  та b для знаходження середнього геометричного: ";
    cout << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    gm = sqrt(a*b);

    cout << "Середнє геометричне рівне :" << gm;
}
