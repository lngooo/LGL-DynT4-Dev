/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A15_F17_O_A02_Struct.c
 * Logic: Juggling algorithm with state wrapped in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct RotState { int n; int k; int g; };

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    struct RotState s = {n, k % n, gcd(k % n, n)};
    for (int i = 0; i < s.g; i++) {
        int t = arr[i], j = i;
        while (1) {
            int d = (j + s.k) % s.n;
            if (d == i) break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = t;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    int k = atoi(argv[1]);
    int n = argc - 2;
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) arr[i] = atoi(argv[i+2]);
    ArrayRotate(arr, n, k);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}