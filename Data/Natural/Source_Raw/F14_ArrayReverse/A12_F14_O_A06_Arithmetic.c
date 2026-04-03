/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A12_F14_O_A06_Arithmetic.c
 * Implementation Logic: Pointer version with complex arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    int *p = arr;
    for(int i = 0; i < (size >> 1); i++) {
        int *a = p + i;
        int *b = p + (size - 1 - i);
        *a ^= *b; *b ^= *a; *a ^= *b;
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