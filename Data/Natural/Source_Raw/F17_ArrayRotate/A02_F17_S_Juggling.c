/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A02_F17_S_Juggling.c
 * Logic: Divide array into GCD(n, k) sets and rotate elements within sets.
 */
#include <stdio.h>
#include <stdlib.h>

int get_gcd(int a, int b) {
    return b == 0 ? a : get_gcd(b, a % b);
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int gcd = get_gcd(k, n);
    for (int i = 0; i < gcd; i++) {
        int temp = arr[i];
        int j = i;
        while (1) {
            int d = (j + k) % n;
            if (d == i) break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
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