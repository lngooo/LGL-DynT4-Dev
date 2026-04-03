/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A04_F25_S_Recursive.c
 * Implementation Logic: Recursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ArrayAverage(int arr[], int n) {
    if (n <= 0) return 0.0;
    if (n == 1) return (double)arr[0];
    double prev_avg = ArrayAverage(arr, n - 1);
    return (prev_avg * (n - 1) + arr[n - 1]) / n;
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