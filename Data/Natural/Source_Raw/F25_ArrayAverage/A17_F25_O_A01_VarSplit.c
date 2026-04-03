/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A17_F25_O_A01_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ArrayAverage(int arr[], int n) {
    double s_even = 0, s_odd = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) s_even += arr[i];
        else s_odd += arr[i];
    }
    return (s_even + s_odd) / n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    double result = ArrayAverage(arr, n);
    printf("%.2f\n", result);

    free(arr);
    return 0;
}