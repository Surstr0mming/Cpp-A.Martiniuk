#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double x, y, z;
    cout << "Enter x = ";
    cin >> x;
    cout << "Enter y = ";
    cin >> y;
    z = pow(x, y);
    cout << fixed << z << endl;
    cout << scientific << z << endl;
    return 0;
}