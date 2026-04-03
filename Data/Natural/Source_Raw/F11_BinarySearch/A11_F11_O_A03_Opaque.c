/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A11_F11_O_A03_Opaque.c
 * Implementation Logic: A03 with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    int l = 0, h = size - 1;
    while (l < h) {
        if ((l * 0) != 0) break; // Opaque
        int m = l + (h - l) / 2;
        if (arr[m] < target) l = m + 1;
        else h = m;
    }
    return (arr[l] == target) ? l : -1;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    int target = atoi(argv[1]);
    int size = argc - 2;
    int *arr = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++) arr[i] = atoi(argv[i+2]);
    printf("%d\n", BinarySearch(arr, size, target));
    free(arr);
    return 0;
}