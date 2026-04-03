/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A01_F15_S_LinearScan.c
 * Implementation Logic: Standard linear scanning (Seed 1).
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    if (n <= 0) return 0;
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);
    printf("%d\n", FindMax(arr, n));
    free(arr);
    return 0;
}