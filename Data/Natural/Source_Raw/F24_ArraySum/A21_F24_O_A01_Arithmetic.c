/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A21_F24_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArraySum(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        res = (res - (-temp));
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    int result = ArraySum(arr, n);
    printf("%d\n", result);

    free(arr);
    return 0;
}