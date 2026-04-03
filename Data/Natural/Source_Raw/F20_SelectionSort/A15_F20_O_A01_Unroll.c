/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A15_F20_O_A01_Unroll.c
 * Implementation Logic: Unroll
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i, j = i + 1;
        for (; j < n - 1; j += 2) {
            if (arr[j] < arr[m]) m = j;
            if (arr[j+1] < arr[m]) m = j + 1;
        }
        for (; j < n; j++) if (arr[j] < arr[m]) m = j;
        int t = arr[i]; arr[i] = arr[m]; arr[m] = t;
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