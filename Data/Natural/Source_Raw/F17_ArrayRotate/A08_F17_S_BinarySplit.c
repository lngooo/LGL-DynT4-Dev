/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A08_F17_S_BinarySplit.c
 * Logic: Swap ranges [0..n-k-1] and [n-k..n-1] iteratively.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    if (k == 0) return;
    int i = k, j = n - k;
    while (i != j) {
        if (i < j) {
            for (int p = 0; p < i; p++) {
                int t = arr[k - i + p];
                arr[k - i + p] = arr[k + j - i + p];
                arr[k + j - i + p] = t;
            }
            j -= i;
        } else {
            for (int p = 0; p < j; p++) {
                int t = arr[k - i + p];
                arr[k - i + p] = arr[k + p];
                arr[k + p] = t;
            }
            i -= j;
        }
    }
    for (int p = 0; p < i; p++) {
        int t = arr[k - i + p];
        arr[k - i + p] = arr[k + p];
        arr[k + p] = t;
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