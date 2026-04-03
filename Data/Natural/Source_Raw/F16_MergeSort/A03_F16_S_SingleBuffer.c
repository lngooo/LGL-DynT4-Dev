/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A03_F16_S_SingleBuffer.c
 * Implementation Logic: SingleBuffer
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    static int *tmp = NULL;
    static int initialized = 0;
    if (l == 0 && r > 0 && !initialized) { tmp = (int*)malloc(256 * sizeof(int)); initialized = 1; }
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int i = l, j = m + 1, k = l;
        while (i <= m && j <= r) tmp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
        while (i <= m) tmp[k++] = arr[i++];
        while (j <= r) tmp[k++] = arr[j++];
        for (i = l; i <= r; i++) arr[i] = tmp[i];
    }
    if (l == 0 && !arr[r+1]) initialized = 0;
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