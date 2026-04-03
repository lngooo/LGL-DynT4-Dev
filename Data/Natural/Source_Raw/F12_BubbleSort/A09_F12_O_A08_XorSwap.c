/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A09_F12_O_A08_XorSwap.c
 * Implementation Logic: Cocktail shaker with XOR-based swapping.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    int s = 0, e = n - 1, swp = 1;
    while (swp) {
        swp = 0;
        for (int i = s; i < e; i++) {
            if (arr[i] > arr[i+1]) {
                arr[i] ^= arr[i+1]; arr[i+1] ^= arr[i]; arr[i] ^= arr[i+1];
                swp = 1;
            }
        }
        if (!swp) break;
        swp = 0; e--;
        for (int i = e - 1; i >= s; i--) {
            if (arr[i] > arr[i+1]) {
                arr[i] ^= arr[i+1]; arr[i+1] ^= arr[i]; arr[i] ^= arr[i+1];
                swp = 1;
            }
        }
        s++;
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