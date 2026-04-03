/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A19_F11_O_A03_Struct.c
 * Implementation Logic: Binary search state stored in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct Range { int l; int r; };

int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    struct Range rng = {0, size - 1};
    while (rng.l < rng.r) {
        int m = rng.l + (rng.r - rng.l) / 2;
        if (arr[m] < target) rng.l = m + 1;
        else rng.r = m;
    }
    return (arr[rng.l] == target) ? rng.l : -1;
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