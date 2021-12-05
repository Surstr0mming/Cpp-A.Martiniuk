#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int  main(){
    bool art = false;
    char filename[100] = "filelow.txt";
    ifstream f(filename);
    string low[] = {"die", "der", "das"};
    string buf;
    ofstream f2("fileup.txt");
    while(f >> buf){
        if(art){
            buf[0] = toupper(buf[0]);
        }
        clog << buf << " ";
        f2 << buf << " ";
        art = false;
        for(int i = 0; i <= 2 ; i++){
            if(buf == low[i]){
                art = true;
                break;
            }
        }
    }
    f.close();
    f2.close();
}