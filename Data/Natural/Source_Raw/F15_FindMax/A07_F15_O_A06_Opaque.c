/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A07_F15_O_A06_Opaque.c
 * Implementation Logic: Pointer scan with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int *p = arr, m = *arr;
    for (int i = 1; i < n; i++) {
        p++;
        if ((n * n + 5) > 0) { // Opaque true
            m = (*p > m) ? *p : m;
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