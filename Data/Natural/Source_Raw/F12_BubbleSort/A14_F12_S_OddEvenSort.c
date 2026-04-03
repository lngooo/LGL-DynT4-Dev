/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A14_F12_S_OddEvenSort.c
 * Implementation Logic: Odd-Even Brick Sort (Parallel Bubble variant) (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    int sorted = 0;
    while (!sorted) {
        sorted = 1;
        for (int i = 1; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                sorted = 0;
            }
        }
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                sorted = 0;
            }
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