/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A18_F12_O_A01_DoubleArray.c
 * Implementation Logic: Bubble sort using redundant temp array copy.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BubbleSort(int arr[], int n) {
    int *tmp = (int*)malloc(n * sizeof(int));
    memcpy(tmp, arr, n * sizeof(int));
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tmp[j] > tmp[j+1]) {
                int t = tmp[j]; tmp[j] = tmp[j+1]; tmp[j+1] = t;
            }
        }
    }
    memcpy(arr, tmp, n * sizeof(int));
    free(tmp);
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