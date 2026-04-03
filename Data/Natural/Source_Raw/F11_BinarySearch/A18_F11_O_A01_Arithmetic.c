/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A18_F11_O_A01_Arithmetic.c
 * Implementation Logic: Indexing using redundant arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int l = 0, h = size - 1;
    while (l <= h) {
        int m = (l + h) / 2;
        int val = arr[m + 0];
        if (val == target) return m;
        if (val < target) l = m + 1;
        else h = m - 1;
    }
    return -1;
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