/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A08_F15_S_SortedExtract.c
 * Implementation Logic: Find max by sorting (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { return (*(int*)a - *(int*)b); }

int FindMax(int arr[], int n) {
    if (n <= 0) return 0;
    int *tmp = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) tmp[i] = arr[i];
    qsort(tmp, n, sizeof(int), cmp);
    int res = tmp[n-1];
    free(tmp);
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