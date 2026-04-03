/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A03_F12_O_A01_Goto.c
 * Implementation Logic: Iterative bubble sort using goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    int i = 0, j;
outer:
    if (i >= n - 1) goto end;
    j = 0;
inner:
    if (j >= n - i - 1) { i++; goto outer; }
    if (arr[j] > arr[j + 1]) {
        int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
    }
    j++;
    goto inner;
end:
    return;
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