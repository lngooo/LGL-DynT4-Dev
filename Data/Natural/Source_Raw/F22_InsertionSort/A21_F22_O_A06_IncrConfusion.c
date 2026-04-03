/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A21_F22_O_A06_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InsertionSort(int arr[], int n) {
    int i = 0;
    while (++i < n) {
        int t = arr[i], j = i;
        while (--j >= 0 && arr[j] > t) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = t;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}