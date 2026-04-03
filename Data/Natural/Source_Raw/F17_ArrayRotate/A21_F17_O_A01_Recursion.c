/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A21_F17_O_A01_Recursion.c
 * Logic: Reversal seed with recursive reverse function.
 */
#include <stdio.h>
#include <stdlib.h>

void rec_rev(int a[], int s, int e) {
    if(s >= e) return;
    int t = a[s]; a[s] = a[e]; a[e] = t;
    rec_rev(a, s+1, e-1);
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    rec_rev(arr, 0, k-1);
    rec_rev(arr, k, n-1);
    rec_rev(arr, 0, n-1);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    int k = atoi(argv[1]);
    int n = argc - 2;
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) arr[i] = atoi(argv[i+2]);
    ArrayRotate(arr, n, k);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}