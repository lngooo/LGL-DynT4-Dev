/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A16_F12_S_JumpTable.c
 * Implementation Logic: Bubble sort with comparison leading to computed goto (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    void *tbl[] = {&&no_swap, &&do_swap};
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            goto *tbl[arr[j] > arr[j + 1]];
        do_swap:
            { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; }
        no_swap:
            continue;
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