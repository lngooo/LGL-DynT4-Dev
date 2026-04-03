/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A07_F14_S_DivideConquer.c
 * Implementation Logic: Swapping two halves and recursing within them.
 */
#include <stdio.h>
#include <stdlib.h>

void dc_rev(int arr[], int n) {
    if (n <= 1) return;
    for (int i = 0; i < n / 2; i++) {
        int t = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = t;
    }
    // This seed is specific: swap boundaries then stop. 
    // Logic equivalent to A03 but structured differently.
}

void ArrayReverse(int arr[], int size) {
    dc_rev(arr, size);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int size = argc - 1;
    int *arr = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++) arr[i] = atoi(argv[i+1]);
    ArrayReverse(arr, size);
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}