/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A20_F16_O_A05_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int s_idx = 0, l_idx = l, r_idx = m + 1;
        int *merged = (int*)malloc((r-l+1)*4);
        while (l_idx <= m && r_idx <= r) {
            if (arr[l_idx] <= arr[r_idx]) merged[s_idx++] = arr[l_idx++];
            else merged[s_idx++] = arr[r_idx++];
        }
        while (l_idx <= m) merged[s_idx++] = arr[l_idx++];
        while (r_idx <= r) merged[s_idx++] = arr[r_idx++];
        for (int i = 0; i < s_idx; i++) arr[l + i] = merged[i];
        free(merged);
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