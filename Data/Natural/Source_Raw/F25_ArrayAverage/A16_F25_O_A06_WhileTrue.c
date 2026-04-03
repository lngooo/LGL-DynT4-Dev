/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A16_F25_O_A06_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ArrayAverage(int arr[], int n) {
    double s = 0; int i = n;
    while (1) {
        if (--i < 0) break;
        s += arr[i];
    }
    return s / n;
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