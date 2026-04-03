/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A21_F16_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int n = r - l + 1;
        int *t = (int*)malloc(n * sizeof(int));
        int i = l, j = m + 1, k = 0;
        while (k < n) {
            int take_left = (i <= m && (j > r || arr[i] <= arr[j]));
            if (take_left) t[k++] = arr[i++];
            else t[k++] = arr[j++];
        }
        for (int x = 0; x < n; x++) arr[l + x] = t[x];
        free(t);
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