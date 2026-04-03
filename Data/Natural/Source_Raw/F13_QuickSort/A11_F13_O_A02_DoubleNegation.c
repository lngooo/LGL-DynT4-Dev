/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A11_F13_O_A02_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QuickSort(int arr[], int low, int high) {
    if (!!(low < high)) {
        int p = arr[low], i = low - 1, j = high + 1;
        while (!!1) {
            do { i++; } while (arr[i] < p);
            do { j--; } while (arr[j] > p);
            if (!!(i >= j)) break;
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
        }
        QuickSort(arr, low, j);
        QuickSort(arr, j + 1, high);
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