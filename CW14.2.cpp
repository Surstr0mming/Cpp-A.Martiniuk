#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int  main(){
    char filename[100] = "file1.txt";
    ifstream f(filename);
    string str, st = "" , buf, np={'.', ',', '!', '?'};
    ofstream f2("file2.txt");
    while(f >> buf) {
        for (int i = 1; i <= buf.size(); i++){
            for (int j = 0; j <=3; j++){
                if (buf[buf.size()-1] == np[j]){
                    buf.erase(buf.size()-1,1);
                }
            }
            str +=buf[buf.size()-i];
        }
        f2 << str << " ";
        str = "";
    }
    f.close();
    f2.close();
}