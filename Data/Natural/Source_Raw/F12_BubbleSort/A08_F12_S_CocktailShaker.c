/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A08_F12_S_CocktailShaker.c
 * Implementation Logic: Bidirectional bubble sort (Cocktail Shaker) (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    int start = 0, end = n - 1, swapped = 1;
    while (swapped) {
        swapped = 0;
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                swapped = 1;
            }
        }
        if (!swapped) break;
        swapped = 0;
        --end;
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                swapped = 1;
            }
        }
        ++start;
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