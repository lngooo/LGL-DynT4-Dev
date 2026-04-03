/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A04_F17_S_StepByStep.c
 * Logic: Rotate the array by one position k times.
 */
#include <stdio.h>
#include <stdlib.h>

void rotateOne(int arr[], int n) {
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    arr[n - 1] = temp;
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    for (int i = 0; i < k; i++) rotateOne(arr, n);
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