/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A12_F13_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int i = low, j = high, p = arr[(low+high)/2];
    for (; i <= j; ) {
        for (; arr[i] < p; ) i++;
        for (; arr[j] > p; ) j--;
        if (i <= j) { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; i++; j--; }
    }
    if (low < j) QuickSort(arr, low, j);
    if (i < high) QuickSort(arr, i, high);
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