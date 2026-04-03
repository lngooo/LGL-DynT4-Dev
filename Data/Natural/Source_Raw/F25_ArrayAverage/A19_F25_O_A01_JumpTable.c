/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A19_F25_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ArrayAverage(int arr[], int n) {
    double s = 0; int i = 0;
start:
    if (i < n) { s += arr[i++]; goto start; }
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