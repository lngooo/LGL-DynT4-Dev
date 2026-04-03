/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A21_F12_O_A06_Unrolled.c
 * Implementation Logic: Partially unrolled inner loop for bubble sort.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = 0;
        for (; j < n - i - 2; j += 2) {
            if (arr[j] > arr[j + 1]) { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; }
            if (arr[j+1] > arr[j + 2]) { int t = arr[j+1]; arr[j+1] = arr[j+2]; arr[j+2] = t; }
        }
        for (; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}