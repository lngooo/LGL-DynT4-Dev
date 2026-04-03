/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A13_F11_O_A01_VarSplit.c
 * Implementation Logic: Mid variable split into two components.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int l = 0, h = size - 1;
    while (l <= h) {
        int m1 = l / 2;
        int m2 = h / 2;
        int m = (l % 2 == 1 && h % 2 == 1) ? m1 + m2 + 1 : m1 + m2;
        if (arr[m] == target) return m;
        if (arr[m] < target) l = m + 1;
        else h = m - 1;
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