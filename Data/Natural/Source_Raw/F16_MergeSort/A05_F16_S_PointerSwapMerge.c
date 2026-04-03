/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A05_F16_S_PointerSwapMerge.c
 * Implementation Logic: PointerSwapMerge
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (r <= l) return;
    int m = (l + r) >> 1;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);
    int *b = (int*)malloc((r - l + 1) * sizeof(int));
    int i = l, j = m + 1, k = 0;
    while (i <= m || j <= r) {
        if (i <= m && (j > r || arr[i] <= arr[j])) b[k++] = arr[i++];
        else b[k++] = arr[j++];
    }
    for (i = 0; i < k; i++) arr[l + i] = b[i];
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