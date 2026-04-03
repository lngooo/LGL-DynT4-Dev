/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A21_F15_O_A01_Unrolled.c
 * Implementation Logic: Partially unrolled scan loop.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int m = arr[0], i = 1;
    for (; i < n - 1; i += 2) {
        if (arr[i] > m) m = arr[i];
        if (arr[i+1] > m) m = arr[i+1];
    }
    for (; i < n; i++) {
        if (arr[i] > m) m = arr[i];
    }
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