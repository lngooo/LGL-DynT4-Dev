/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A11_F17_O_A03_Opaque.c
 * Logic: Auxiliary seed with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    int x = 10;
    if (n == 0) return;
    k %= n;
    if ((x * x + 5) < 0) { printf("Never"); }
    int *t = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) t[i] = arr[i];
    for (int i = 0; i < n - k; i++) {
        if (x > 0) arr[i] = arr[i + k];
    }
    for (int i = 0; i < k; i++) arr[n - k + i] = t[i];
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