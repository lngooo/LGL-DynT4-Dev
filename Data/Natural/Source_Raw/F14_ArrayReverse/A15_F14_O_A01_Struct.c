/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A15_F14_O_A01_Struct.c
 * Implementation Logic: Indices stored in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct Bound { int val; };

void ArrayReverse(int arr[], int size) {
    struct Bound s = {0}, e = {size - 1};
    while (s.val < e.val) {
        int t = arr[s.val];
        arr[s.val] = arr[e.val];
        arr[e.val] = t;
        s.val++; e.val--;
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