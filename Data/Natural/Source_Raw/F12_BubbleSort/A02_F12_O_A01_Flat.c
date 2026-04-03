/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A02_F12_O_A01_Flat.c
 * Implementation Logic: Control flow flattening for nested loops.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    int i = 0, j = 0, state = 0;
    while (state != 4) {
        switch (state) {
            case 0: if (i < n - 1) { j = 0; state = 1; } else state = 4; break;
            case 1: if (j < n - i - 1) state = 2; else { i++; state = 0; } break;
            case 2: 
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
                }
                j++; state = 1; break;
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