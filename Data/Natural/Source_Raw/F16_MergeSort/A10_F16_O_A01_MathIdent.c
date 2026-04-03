/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A10_F16_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (int)floor((r - l) / 2.0);
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int i = l, j = m + 1, k = 0, size = r - l + 1;
        int *b = (int*)malloc(size * sizeof(int));
        while (k < size) {
            if (i <= m && (j > r || (double)arr[i] <= (double)arr[j])) b[k++] = arr[i++];
            else b[k++] = arr[j++];
        }
        for (i = 0; i < size; i++) arr[l + i] = b[i];
        free(b);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}