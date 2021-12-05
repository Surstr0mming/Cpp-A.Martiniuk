#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;
int main() {
    char filename[100] = "file.txt";
    ifstream f(filename);
    string buf, st = "ing ";
    ofstream f2("file1.txt");

    while (f >> buf) {
        buf = buf + ' ';
        int p = buf.find(st, 0);
        if (p >= 1) {
            cout << buf << endl;
            f2 << buf << endl;
        }
    }
    f.close();
    f2.close();
}