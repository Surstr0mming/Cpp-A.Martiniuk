

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define N 250

int split(string s, const string& delimiter, string a[], int n){
    if(s[s.length() - 1] != ' '){
        s += " ";
    }
    size_t k = 0, position;
    while ((position = s.find(delimiter)) != string::npos && k<n){
        a[k++] = s.substr(0, position);
        s.erase(0, position + delimiter.length());
    }
    return k;
}
int main(){
    string str, str1 = " ";
    int n;
    cout << "Input string with words, if you wont to stop writing words press Enter: ";
    getline(cin, str);
    cout << " Enter number of first words, which u want to see,  n = ";
    cin >>n;
    string a[N];
    int z = split(str, str1, a, n);
    cout << "Your " << n << " first words : " << endl;
    for(int i = 0; i < z; i++){
        cout << a[i] << ", ";
    }
    return 0;
}
