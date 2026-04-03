/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A20_F14_O_A01_Macro.c
 * Implementation Logic: Reversal logic hidden in macros.
 */
#include <stdio.h>
#include <stdlib.h>

#define SWAP(a,b) {int t=a; a=b; b=t;}

void ArrayReverse(int arr[], int size) {
    int i = 0, j = size - 1;
    while(i < j) {
        SWAP(arr[i], arr[j]);
        i++; j--;
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