/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A19_F14_O_A06_Aliases.c
 * Implementation Logic: Pointer aliasing to obscure swaps.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    int *p = arr;
    for(int i=0; i<size/2; i++) {
        int *left = &p[i];
        int *right = &p[size-1-i];
        int val = *left;
        *left = *right;
        *right = val;
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