/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A04_F20_S_DualSelection.c
 * Implementation Logic: DualSelection
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int min_v = arr[i], max_v = arr[i];
        int min_i = i, max_i = i;
        for (int k = i; k <= j; k++) {
            if (arr[k] < min_v) { min_v = arr[k]; min_i = k; }
            else if (arr[k] > max_v) { max_v = arr[k]; max_i = k; }
        }
        int t1 = arr[i]; arr[i] = arr[min_i]; arr[min_i] = t1;
        if (max_i == i) max_i = min_i;
        int t2 = arr[j]; arr[j] = arr[max_i]; arr[max_i] = t2;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}