/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A17_F12_O_A16_Switch.c
 * Implementation Logic: BS where swap decision is handled in a switch.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            switch (arr[j] > arr[j + 1]) {
                case 1: { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; break; }
                default: break;
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