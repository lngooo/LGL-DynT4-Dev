/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A13_F15_O_A12_Switch.c
 * Implementation Logic: Max using switch-based logic.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int m = arr[0];
    for(int i=1; i<n; i++) {
        switch(arr[i] > m) {
            case 1: m = arr[i]; break;
            default: break;
        }
    }
    return m;
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