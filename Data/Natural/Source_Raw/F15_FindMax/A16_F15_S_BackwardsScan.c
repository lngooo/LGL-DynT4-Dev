/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A16_F15_S_BackwardsScan.c
 * Implementation Logic: Backwards linear scan (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int max = arr[n-1];
    for(int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    printf("%d\n", FindMax(arr, n));
    free(arr);
    return 0;
}