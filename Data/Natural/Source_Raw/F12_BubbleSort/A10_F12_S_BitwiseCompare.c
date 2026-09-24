/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A10_F12_S_BitwiseCompare.c
 * Implementation Logic: Bubble sort with comparison result as multiplier (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int diff = arr[j] - arr[j + 1];
            int gt = (diff != 0) & ((((unsigned int)diff) >> 31) ^ 1U);
            int mask = -gt;
            int x = (arr[j] ^ arr[j + 1]) & mask;
            arr[j] ^= x;
            arr[j + 1] ^= x;
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