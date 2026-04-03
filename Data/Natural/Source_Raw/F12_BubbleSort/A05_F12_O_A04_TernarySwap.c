/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A05_F12_O_A04_TernarySwap.c
 * Implementation Logic: Recursive BS with logic hidden in ternary expressions.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    if (n <= 1) return;
    for (int i = 0; i < n - 1; i++) {
        (arr[i] > arr[i+1]) ? ({int t=arr[i]; arr[i]=arr[i+1]; arr[i+1]=t; 0;}) : 0;
    }
    BubbleSort(arr, n - 1);
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