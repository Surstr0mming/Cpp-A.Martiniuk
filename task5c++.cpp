#include <ctime>
#include <iostream>
#include <locale>

using namespace std;
int main(){
    tm tm{};
    int mm, dd, yyyy;
    cout << "Enter number of months :" << endl << "months = ";
    cin >> mm;
    cout << "Enter number of days :" << endl << "days = ";
    cin >> dd;
    cout << "Enter number of years :" << endl << "years = ";
    cin >> yyyy;
    tm.tm_year = yyyy - 1900;
    tm.tm_mon = mm - 1;
    tm.tm_mday = dd;
    char mbstr[100];
    setlocale(LC_ALL, "de_DE.utf8");
    if (strftime(mbstr, sizeof(mbstr), "%A %c", &tm)) {
        cout << mbstr << endl;
    }
    setlocale(LC_ALL, "en_US.utf8");
    if (strftime(mbstr, sizeof(mbstr), "%A %c", &tm)) {
        cout << mbstr << endl;
    }
    setlocale(LC_ALL, "uk_UA.utf8");
    if (strftime(mbstr, sizeof(mbstr), "%A %c", &tm)) {
        cout << mbstr << endl;
    }
}