/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A12_F17_O_A01_Arithmetic.c
 * Logic: Reversal with XOR swapping and pointer arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

void rv(int *b, int *e) {
    while(b < e) {
        *b ^= *e; *e ^= *b; *b ^= *e;
        b++; e--;
    }
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    rv(arr, arr + k - 1);
    rv(arr + k, arr + n - 1);
    rv(arr, arr + n - 1);
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