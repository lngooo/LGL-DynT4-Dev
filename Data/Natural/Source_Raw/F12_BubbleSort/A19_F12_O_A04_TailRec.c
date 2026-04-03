/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A19_F12_O_A04_TailRec.c
 * Implementation Logic: Bubble sort as tail-recursive single-pass helper.
 */
#include <stdio.h>
#include <stdlib.h>

void pass(int arr[], int n) {
    if (n <= 1) return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
        }
    }
    pass(arr, n - 1);
}

void BubbleSort(int arr[], int n) {
    pass(arr, n);
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