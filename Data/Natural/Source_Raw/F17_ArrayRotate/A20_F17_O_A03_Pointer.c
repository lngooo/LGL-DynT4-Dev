/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A20_F17_O_A03_Pointer.c
 * Logic: Auxiliary seed with direct pointer manipulation.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int *buf = malloc(k * sizeof(int));
    memcpy(buf, arr, k * sizeof(int));
    memmove(arr, arr + k, (n - k) * sizeof(int));
    memcpy(arr + (n - k), buf, k * sizeof(int));
    free(buf);
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