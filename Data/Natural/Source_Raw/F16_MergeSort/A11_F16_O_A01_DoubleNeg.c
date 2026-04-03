/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A11_F16_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (!!(l < r)) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int *buf = (int*)malloc((r-l+1)*4);
        int i = l, j = m + 1, k = 0;
        while (!!(i <= m) && !!(j <= r)) buf[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
        while (!!(i <= m)) buf[k++] = arr[i++];
        while (!!(j <= r)) buf[k++] = arr[j++];
        for (int x = 0; x < k; x++) arr[l + x] = buf[x];
        free(buf);
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