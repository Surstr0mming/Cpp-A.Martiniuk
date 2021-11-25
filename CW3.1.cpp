#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, x;
    cout << "x=" ;
    cin >> x;
    if ( x<=999 ) {
        a = (x / 100)%10;
        b = (x / 10)%10;
        c = (x / 1)%10;
        cout << "a)Number of units = " << c <<endl;
        cout << "Number of tens= " << b <<endl;
        cout << "Number of hundreds = " << a <<endl;
        cout << "b)Sum of digits = " << a+b+c <<endl;
        cout << "c)The number formed when reading a given number from right to left = " << c*100 + b*10 + a <<endl;
    }
    return 0;

}