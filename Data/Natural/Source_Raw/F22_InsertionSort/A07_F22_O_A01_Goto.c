/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A07_F22_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InsertionSort(int arr[], int n) {
    int i = 1, j, k;
outer:
    if (i >= n) return;
    k = arr[i]; j = i - 1;
inner:
    if (j < 0 || arr[j] <= k) goto place;
    arr[j + 1] = arr[j]; j--; goto inner;
place:
    arr[j + 1] = k; i++; goto outer;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}