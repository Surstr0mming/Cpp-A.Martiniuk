#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    int s;
    cout << ("Enter number of elements of the array : ");
    cin >> s;
    if (s > 0) {
        int* a = (int*) calloc(s, sizeof *a);
        if (a) {
            int sum = 0;
            for (int i = 0; i < s; i++) {
                cout << "a[" << i+1 << "] = ";
                cin >> a[i];
                sum += a[i] * a[i];
            }
            cout << " The sum of the squares of all elements of the array : " << sum << endl;
            free(a);
        }
    }
    return 0;
}