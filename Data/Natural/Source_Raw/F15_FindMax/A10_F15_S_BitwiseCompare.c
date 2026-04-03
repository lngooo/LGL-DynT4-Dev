/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A10_F15_S_BitwiseCompare.c
 * Implementation Logic: Max using bit-manipulation based max(a,b) (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>

int bit_max(int a, int b) {
    return a - ((a - b) & ((a - b) >> 31));
}

int FindMax(int arr[], int n) {
    int m = arr[0];
    for(int i=1; i<n; i++) m = bit_max(m, arr[i]);
    return m;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    printf("%d\n", FindMax(arr, n));
    free(arr);
    return 0;
}