/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A05_F17_S_BlockSwap.c
 * Logic: Recursive block swapping based on sub-array sizes.
 */
#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int fi, int si, int d) {
    for (int i = 0; i < d; i++) {
        int temp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i] = temp;
    }
}

void block_rotate(int arr[], int k, int n) {
    if (k == 0 || k == n) return;
    if (n - k == k) {
        swap(arr, 0, n - k, k);
        return;
    }
    if (k < n - k) {
        swap(arr, 0, n - k, k);
        block_rotate(arr, k, n - k);
    } else {
        swap(arr, 0, k, n - k);
        block_rotate(arr + n - k, 2 * k - n, k);
    }
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    block_rotate(arr, k % n, n);
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