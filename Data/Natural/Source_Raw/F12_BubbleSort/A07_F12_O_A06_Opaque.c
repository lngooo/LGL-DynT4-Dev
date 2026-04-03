/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A07_F12_O_A06_Opaque.c
 * Implementation Logic: Optimized BS with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    int s;
    for (int i = 0; i < n - 1; i++) {
        s = 0;
        if ((n * n + 1) > 0) { // Opaque true
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
                    s = 1;
                }
            }
        }
        if (s == 0) break;
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