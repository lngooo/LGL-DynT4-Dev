/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A07_F11_S_Bitwise.c
 * Implementation Logic: Binary search using bit-level range determination.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int pos = 0;
    int max_bit = 31 - __builtin_clz(size);
    for (int i = max_bit; i >= 0; i--) {
        int next_pos = pos | (1 << i);
        if (next_pos < size && arr[next_pos] <= target) pos = next_pos;
    }
    return (arr[pos] == target) ? pos : -1;
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