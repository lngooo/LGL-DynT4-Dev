/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A14_F11_O_A07_Pointer.c
 * Implementation Logic: Bitwise search using pointer arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int *p = arr;
    int cur = 0;
    int b = 1 << (31 - __builtin_clz(size));
    while (b > 0) {
        int idx = cur | b;
        if (idx < size && *(p + idx) <= target) cur = idx;
        b >>= 1;
    }
    return (*(p + cur) == target) ? cur : -1;
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