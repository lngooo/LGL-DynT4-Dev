/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A05_F13_S_MedianOfThree.c
 * Implementation Logic: MedianOfThree
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[low]) { int t = arr[mid]; arr[mid] = arr[low]; arr[low] = t; }
        if (arr[high] < arr[low]) { int t = arr[high]; arr[high] = arr[low]; arr[low] = t; }
        if (arr[high] < arr[mid]) { int t = arr[high]; arr[high] = arr[mid]; arr[mid] = t; }
        int pivot = arr[mid];
        int i = low, j = high;
        while (i <= j) {
            while (arr[i] < pivot) i++;
            while (arr[j] > pivot) j--;
            if (i <= j) {
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
                i++; j--;
            }
        }
        if (low < j) QuickSort(arr, low, j);
        if (i < high) QuickSort(arr, i, high);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}