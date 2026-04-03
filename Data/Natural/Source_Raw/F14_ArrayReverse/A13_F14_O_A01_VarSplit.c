/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A13_F14_O_A01_VarSplit.c
 * Implementation Logic: Indices split into base and offset.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    int s_base = 0, s_off = 0;
    int e_base = size - 1, e_off = 0;
    while ((s_base + s_off) < (e_base + e_off)) {
        int idx1 = s_base + s_off;
        int idx2 = e_base + e_off;
        int t = arr[idx1];
        arr[idx1] = arr[idx2];
        arr[idx2] = t;
        s_off++;
        e_off--;
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