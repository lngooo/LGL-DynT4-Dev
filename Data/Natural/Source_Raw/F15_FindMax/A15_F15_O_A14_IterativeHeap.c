/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A15_F15_O_A14_IterativeHeap.c
 * Implementation Logic: Iterative max-heap build logic.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int *h = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) h[i] = arr[i];
    for (int i = 1; i < n; i++) {
        int c = i;
        while (c > 0) {
            int p = (c - 1) / 2;
            if (h[c] > h[p]) { int t = h[c]; h[c] = h[p]; h[p] = t; c = p; }
            else break;
        }
    }
    int res = h[0];
    free(h);
    return res;
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