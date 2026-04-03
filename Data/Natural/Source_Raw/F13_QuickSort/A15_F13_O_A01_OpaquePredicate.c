/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A15_F13_O_A01_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        if ((high * high + 1) > 0) {
            int p = arr[high], i = low - 1;
            for (int j = low; j < high; j++) {
                if (arr[j] < p) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
            }
            int t = arr[i+1]; arr[i+1] = arr[high]; arr[high] = t;
            QuickSort(arr, low, i);
            QuickSort(arr, i + 2, high);
        }
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