#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("file.txt");
    if (!file.good())
        exit(1);
    while (file.good()) {
        string s;
        getline(file, s);
        if (file.fail())
            break;
        int td = 0;
        int i = 0;
        int td1, td2;
        while (i < s.length()) {
            td1 = s.find("<td>", i);
            td2 = s.find("</td>", i);
            if (td1 != -1 && td2 != -1 && td1 < td2) {
                td++;
                i = td1 + 4;
            }
            else if (td1 != -1 && td2 != -1 && td2 < td1) {
                td--;
                i = td2 + 5;
            }
            else if (td1 != -1 && td2 == -1) {
                td++;
                i = td1 + 4;
            }
            else if (td1 == -1 && td2 != -1) {
                td--;
                i = td2 + 5;
            }
            else
                break;

            if (td < 0)
                break;
        }
        cout << s << endl;
        cout << boolalpha << (td == 0) << endl;
    }
    file.close();
    return 0;
}