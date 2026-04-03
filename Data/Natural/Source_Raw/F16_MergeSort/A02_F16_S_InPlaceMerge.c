/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A02_F16_S_InPlaceMerge.c
 * Implementation Logic: InPlaceMerge
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int start2 = m + 1;
        if (arr[m] <= arr[start2]) return;
        while (l <= m && start2 <= r) {
            if (arr[l] <= arr[start2]) l++;
            else {
                int val = arr[start2];
                int index = start2;
                while (index != l) { arr[index] = arr[index - 1]; index--; }
                arr[l] = val;
                l++; m++; start2++;
            }
        }
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