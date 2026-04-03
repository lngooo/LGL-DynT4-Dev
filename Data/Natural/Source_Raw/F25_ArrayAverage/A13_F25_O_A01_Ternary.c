/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A13_F25_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ArrayAverage(int arr[], int n) {
    double s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return (n > 0) ? (s / n) : 0.0;
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