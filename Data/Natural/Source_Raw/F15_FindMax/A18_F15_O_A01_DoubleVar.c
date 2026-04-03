/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A18_F15_O_A01_DoubleVar.c
 * Implementation Logic: Linear scan with redundant tracking variables.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int cur_max = arr[0], global_max = arr[0];
    for(int i=0; i<n; i++) {
        if (arr[i] > cur_max) cur_max = arr[i];
        if (cur_max > global_max) global_max = cur_max;
    }
    return global_max;
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