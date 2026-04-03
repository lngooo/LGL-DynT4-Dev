/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A21_F14_O_A02_TailRec.c
 * Implementation Logic: Tail-recursive optimization variation.
 */
#include <stdio.h>
#include <stdlib.h>

void helper(int a[], int s, int e) {
    while(s < e) {
        int t = a[s]; a[s] = a[e]; a[e] = t;
        s++; e--;
    }
}

void ArrayReverse(int arr[], int size) {
    if(size > 1) helper(arr, 0, size - 1);
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