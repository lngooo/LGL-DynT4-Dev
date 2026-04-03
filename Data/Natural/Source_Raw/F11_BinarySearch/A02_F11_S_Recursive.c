/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A02_F11_S_Recursive.c
 * Implementation Logic: Classic recursive divide and conquer.
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return search(arr, mid + 1, high, target);
    return search(arr, low, mid - 1, target);
}

int BinarySearch(int arr[], int size, int target) {
    return search(arr, 0, size - 1, target);
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