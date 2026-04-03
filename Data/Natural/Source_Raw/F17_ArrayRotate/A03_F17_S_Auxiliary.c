/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A03_F17_S_Auxiliary.c
 * Logic: Copy k elements to temp array, shift remaining, then copy back.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int *temp = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) temp[i] = arr[i];
    for (int i = 0; i < n - k; i++) arr[i] = arr[i + k];
    for (int i = 0; i < k; i++) arr[n - k + i] = temp[i];
    free(temp);
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