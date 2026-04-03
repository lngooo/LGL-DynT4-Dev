/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A05_F14_S_XorSwap.c
 * Implementation Logic: In-place reversal using XOR swap algorithm.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];
    }
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