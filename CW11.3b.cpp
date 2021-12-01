#include <cstdlib>
#include <cstdio>
#include <cmath>
#define F "F.int64"
#define G "G.int64"
#define N 100


void input_until_zero_to_file(char* filename) {
    FILE* f = fopen(filename, "wb");
    if (!f) exit(1);

    int n = 0;
    int arr[N];
    while (true) {
        scanf("%ld", &arr[n]);
        if (arr[n] == 0)

            break;
        n++;
    }
    fwrite(arr, sizeof (int), n, f);

    fclose(f);
}


void exact_squares_numbers_to_file(char* filename_inp, char* filename_out) {
    FILE* inp = fopen(filename_inp, "rb");
    if (!inp) exit(1);
    FILE* out = fopen(filename_out, "wb");
    if (!out) exit(1);

    int num;
    while (fread(&num, sizeof (int), 1, inp)) {
        if (fmod(sqrt(num), 1) < 0.0000000001)
            fwrite(&num, sizeof (int), 1, out);
    }

    fclose(inp);
    fclose(out);
}


void print_int_from_file(char* filename) {
    FILE* f = fopen(filename, "rb");
    if (!f) exit(1);

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    unsigned long long k = size / sizeof (int);

    fseek(f, 0, SEEK_SET);
    for (int i = 0; i < k; i++) {
        int num;
        fread(&num, sizeof (int), 1, f);
        printf("%ld ", num);
    }
    printf("\n");

    fclose(f);
}


int main() {
    printf("Enter elements of the array (if you want to stop the program enter 0):");
    input_until_zero_to_file(F);
    exact_squares_numbers_to_file(F, G);
    printf("Entered array :");
    print_int_from_file(F);
    printf("Array of full square :");
    print_int_from_file(G);
    return 0;
}