/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A05_F15_O_A04_Ternary.c
 * Implementation Logic: Recursive max hidden in ternary nested logic.
 */
#include <stdio.h>
#include <stdlib.h>

int m_r(int a[], int l, int r) {
    if (l == r) return a[l];
    int m = l + (r-l)/2;
    int v1 = m_r(a, l, m), v2 = m_r(a, m+1, r);
    return (v1 > v2) ? v1 : v2;
}

int FindMax(int arr[], int n) { return (n > 0) ? m_r(arr, 0, n-1) : 0; }

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    printf("%d\n", FindMax(arr, n));
    free(arr);
    return 0;
}