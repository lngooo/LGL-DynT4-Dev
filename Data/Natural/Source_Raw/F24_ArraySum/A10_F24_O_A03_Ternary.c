/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A10_F24_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArraySum(int arr[], int n) {
    return (n <= 0) ? 0 : arr[0] + ArraySum(arr + 1, n - 1);
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