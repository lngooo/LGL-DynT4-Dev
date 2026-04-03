/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A10_F11_O_A02_Goto.c
 * Implementation Logic: Recursive logic of A02 replaced by goto chain.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;
start:
    if (low > high) goto not_found;
    mid = low + (high - low) / 2;
    if (arr[mid] == target) goto found;
    if (arr[mid] < target) { low = mid + 1; goto start; }
    high = mid - 1; goto start;
found:
    return mid;
not_found:
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