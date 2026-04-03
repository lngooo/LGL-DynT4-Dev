/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A06_F15_S_PointerArithmetic.c
 * Implementation Logic: Linear scan using pure pointer arithmetic (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    if (n <= 0) return 0;
    int *p = arr;
    int max = *p;
    for (int i = 1; i < n; i++) {
        p++;
        if (*p > max) max = *p;
    }
    return max;
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