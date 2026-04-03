/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A03_F11_S_Deferred.c
 * Implementation Logic: Binary search that defers equality check to the end.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    int low = 0, high = size - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) low = mid + 1;
        else high = mid;
    }
    return (arr[low] == target) ? low : -1;
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