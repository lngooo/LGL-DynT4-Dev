/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A15_F11_O_A02_Tail.c
 * Implementation Logic: Tail-recursive optimization variation of A02.
 */
#include <stdio.h>
#include <stdlib.h>

int helper(int a[], int l, int r, int t) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == t) return m;
        if (a[m] < t) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int BinarySearch(int arr[], int size, int target) {
    return helper(arr, 0, size - 1, target);
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