/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A04_F15_S_RecursiveDivide.c
 * Implementation Logic: Recursive divide and conquer (Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

int find_max_rec(int arr[], int l, int r) {
    if (l == r) return arr[l];
    int mid = l + (r - l) / 2;
    int m1 = find_max_rec(arr, l, mid);
    int m2 = find_max_rec(arr, mid + 1, r);
    return (m1 > m2) ? m1 : m2;
}

int FindMax(int arr[], int n) {
    if (n <= 0) return 0;
    return find_max_rec(arr, 0, n - 1);
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