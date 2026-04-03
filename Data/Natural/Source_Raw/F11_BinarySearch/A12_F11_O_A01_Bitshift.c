/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A12_F11_O_A01_Bitshift.c
 * Implementation Logic: Iterative with bitshifts instead of division.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int lo = 0, hi = size - 1;
    while (lo <= hi) {
        int m = lo + ((hi - lo) >> 1);
        if (arr[m] == target) return m;
        if (arr[m] < target) lo = m + 1;
        else hi = m - 1;
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