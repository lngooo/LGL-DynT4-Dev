/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A03_F24_S_RecursiveSimple.c
 * Implementation Logic: RecursiveSimple
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArraySum(int arr[], int n) {
    if (n <= 0) return 0;
    return arr[n-1] + ArraySum(arr, n-1);
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