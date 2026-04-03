/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A18_F24_O_A05_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArraySum(int arr[], int n) {
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) s1 += arr[i];
        else s2 += arr[i];
    }
    return s1 + s2;
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