/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A15_F16_O_A05_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);
    int *b = (int*)malloc((r-l+1)*4), i = l, j = m+1, k = 0;
    for (int d = 0; d < 1; d++) {
        while (i <= m && j <= r) b[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }
    while (i <= m) b[k++] = arr[i++];
    while (j <= r) b[k++] = arr[j++];
    for (int x = 0; x < k; x++) arr[l + x] = b[x];
    free(b);
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