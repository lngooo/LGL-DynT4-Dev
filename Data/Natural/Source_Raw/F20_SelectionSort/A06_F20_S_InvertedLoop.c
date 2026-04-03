/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A06_F20_S_InvertedLoop.c
 * Implementation Logic: InvertedLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int max_idx = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[max_idx]) max_idx = j;
        }
        int t = arr[i]; arr[i] = arr[max_idx]; arr[max_idx] = t;
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