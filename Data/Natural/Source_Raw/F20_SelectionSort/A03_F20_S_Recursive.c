/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A03_F20_S_Recursive.c
 * Implementation Logic: Recursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    if (n <= 1) return;
    int min_idx = 0;
    for (int i = 1; i < n; i++) if (arr[i] < arr[min_idx]) min_idx = i;
    int tmp = arr[0]; arr[0] = arr[min_idx]; arr[min_idx] = tmp;
    SelectionSort(arr + 1, n - 1);
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