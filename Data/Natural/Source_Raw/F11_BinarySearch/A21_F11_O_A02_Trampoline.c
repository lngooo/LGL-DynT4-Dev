/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A21_F11_O_A02_Trampoline.c
 * Implementation Logic: Pseudo-trampolined recursive calls.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int l = 0, r = size - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) return m;
        if (arr[m] < target) { l = m + 1; continue; }
        r = m - 1;
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