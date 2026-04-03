/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A06_F17_S_FullCopy.c
 * Logic: Map source index i to target index (i-k)%n in a new array.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int *res = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        res[i] = arr[(i + k) % n];
    }
    for (int i = 0; i < n; i++) arr[i] = res[i];
    free(res);
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