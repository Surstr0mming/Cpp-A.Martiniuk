#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
#define N 80



typedef struct {
    char name[N];
    int height;
} mountainpeak;

void Output(mountainpeak a) {
    printf("Mountain: %s, height: %d\n", a.name, a.height);
}


void Output_array(mountainpeak arr[], int n) {
    for (int i = 0; i < n; i++)
        Output(arr[i]);
}


mountainpeak Input() {
    mountainpeak a;
    cout << endl << "Enter name of the peek :";
    cin >> a.name;
    cout << endl << "Enter height of thr peek :";
    cin >> a.height;
    return a;
}

void highest_peak(mountainpeak arr[], int n, char* result) {
    int max = 0;
    int max_height = arr[0].height;
    for (int i = 1; i < n; i++) {
        if (arr[i].height > max_height) {
            max_height = arr[i].height;
            max = i;
        }
    }
    strcpy(result, arr[max].name);
}


int peak_height(mountainpeak arr[], int n, char* name) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, name) == 0)
            return arr[i].height;

    }
    return -1;
}


int main() {

    mountainpeak p[N];
    char name[N];
    unsigned n;
    cout << "Enter number of peeks : ";
    cin >> n;
    for (unsigned i = 0; i<n; i++) {
        cout << "Mountain " << i + 1 << " : ";
        p[i] = Input();
    }

    char highest_peak_name[N];
    highest_peak(p, n, highest_peak_name);
    cout << "Highest peek is - " << highest_peak_name << endl;
    cout << "Enter name of the mountain to found it" << endl;
    cin >> name;
    int height = peak_height(p, n, name);
    if (height!= -1)
        cout << "Height of the " << name << " are meters" << height;
    else
        cout << "No peek of this name";
    return 0;
}