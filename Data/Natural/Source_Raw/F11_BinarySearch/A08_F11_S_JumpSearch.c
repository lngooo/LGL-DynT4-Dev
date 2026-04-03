/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A08_F11_S_JumpSearch.c
 * Implementation Logic: Jump search using sqrt(n) blocks, then linear scan.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BinarySearch(int arr[], int size, int target) {
    int step = sqrt(size);
    int prev = 0;
    while (arr[(step < size ? step : size) - 1] < target) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) return -1;
    }
    while (arr[prev] < target) {
        prev++;
        if (prev == (step < size ? step : size)) return -1;
    }
    if (arr[prev] == target) return prev;
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