/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A02_F14_S_Recursive.c
 * Implementation Logic: Recursive reversal by swapping boundaries.
 */
#include <stdio.h>
#include <stdlib.h>

void reverse_rec(int arr[], int s, int e) {
    if (s >= e) return;
    int t = arr[s]; arr[s] = arr[e]; arr[e] = t;
    reverse_rec(arr, s + 1, e - 1);
}

void ArrayReverse(int arr[], int size) {
    if (size > 1) reverse_rec(arr, 0, size - 1);
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