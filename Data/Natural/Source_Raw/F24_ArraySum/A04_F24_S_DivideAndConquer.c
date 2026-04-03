/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A04_F24_S_DivideAndConquer.c
 * Implementation Logic: DivideAndConquer
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArraySum(int arr[], int n) {
    if (n <= 0) return 0;
    if (n == 1) return arr[0];
    int mid = n / 2;
    return ArraySum(arr, mid) + ArraySum(arr + mid, n - mid);
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