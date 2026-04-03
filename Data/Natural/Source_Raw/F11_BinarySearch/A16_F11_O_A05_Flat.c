/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A16_F11_O_A05_Flat.c
 * Implementation Logic: Flattened exponential search.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    int i = 1, st = 0, l, r, m;
    while (st != -1) {
        switch(st) {
            case 0: if (arr[0] == target) return 0; st = 1; break;
            case 1: if (i < size && arr[i] <= target) { i *= 2; } else { l = i/2; r = (i < size) ? i : size-1; st = 2; } break;
            case 2: if (l <= r) { m = l + (r-l)/2; if(arr[m] == target) return m; if(arr[m] < target) l = m + 1; else r = m - 1; } else return -1; break;
        }
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