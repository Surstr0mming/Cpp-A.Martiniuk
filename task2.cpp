#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
int main() {

    string str, st = "" , buf, buf1, np={'.', ',', '!', '?'};    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int tf = 1;
    ifstream f("file.txt");
    ifstream f1("file1.txt");
    if (!f.good() and !f1.good()) exit(1);
    while(f >> buf and f1 >> buf1) {
        for (int i = 1; i <= buf.size(); i++){
            for (int j = 0; j <=3; j++) {
                if (buf[buf.size() - 1] == np[j]) {
                    buf.erase(buf.size() - 1, 1);
                    for (int i = 1; i <= buf1.size(); i++) {
                        for (int j = 0; j <= 3; j++) {
                            if (buf1[buf1.size() - 1] == np[j]) {
                                buf1.erase(buf1.size() - 1, 1);
                                cout << "buf = " << buf << "buf1 = " << buf1;
                                if (buf != buf1) {
                                    tf = 0;
                                }
                            }
                        }
                    }
                }
            }
            str +=buf[buf.size()-i];
        }
        str = "";
    }
    if (tf == 0) {
        cout << "Файли не збігаються ";
    }
    else{
        cout << "Файли рівні ";
    }
    f.close();
    f1.close();
    return 0;
}