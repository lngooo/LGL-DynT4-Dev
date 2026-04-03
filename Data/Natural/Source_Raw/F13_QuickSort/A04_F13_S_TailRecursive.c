/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A04_F13_S_TailRecursive.c
 * Implementation Logic: TailRecursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QuickSort(int arr[], int low, int high) {
    while (low < high) {
        int p = arr[high], i = low;
        for (int j = low; j < high; j++) {
            if (arr[j] < p) {
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
                i++;
            }
        }
        int t = arr[i]; arr[i] = arr[high]; arr[high] = t;
        if (i - low < high - i) {
            QuickSort(arr, low, i - 1);
            low = i + 1;
        } else {
            QuickSort(arr, i + 1, high);
            high = i - 1;
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