/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A20_F11_O_A01_WhileTrue.c
 * Implementation Logic: Infinite loop with internal break conditions.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int l = 0, h = size - 1;
    while (1) {
        if (l > h) return -1;
        int m = l + (h - l) / 2;
        if (arr[m] == target) return m;
        if (arr[m] < target) l = m + 1;
        else h = m - 1;
    }
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