/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A19_F15_O_A04_TailRec.c
 * Implementation Logic: Tail-recursive linear scan.
 */
#include <stdio.h>
#include <stdlib.h>

int tr(int a[], int n, int idx, int m) {
    if (idx == n) return m;
    return tr(a, n, idx + 1, (a[idx] > m ? a[idx] : m));
}

int FindMax(int arr[], int n) { return tr(arr, n, 0, arr[0]); }

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    printf("%d\n", FindMax(arr, n));
    free(arr);
    return 0;
}