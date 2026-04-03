/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A17_F17_O_A03_Long.c
 * Logic: Auxiliary seed using long long for address calculation.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    long long ln = n, lk = k % n;
    int *t = malloc(lk * sizeof(int));
    for(long long i=0; i<lk; i++) t[i] = *(arr + i);
    for(long long i=0; i<ln-lk; i++) *(arr + i) = *(arr + i + lk);
    for(long long i=0; i<lk; i++) *(arr + ln - lk + i) = t[i];
    free(t);
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