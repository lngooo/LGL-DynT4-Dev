/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A10_F20_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    if (n <= 1) return;
    int m = 0;
    for(int i=1; i<n; i++) m = (arr[i] < arr[m]) ? i : m;
    int t = arr[0]; arr[0] = arr[m]; arr[m] = t;
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