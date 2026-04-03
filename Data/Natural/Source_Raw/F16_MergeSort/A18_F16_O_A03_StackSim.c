/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A18_F16_O_A03_StackSim.c
 * Implementation Logic: StackSim
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);
    int temp[256], i = l, j = mid + 1, k = l;
    while (i <= mid || j <= r) {
        if (i <= mid && (j > r || arr[i] <= arr[j])) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    for (int x = l; x <= r; x++) arr[x] = temp[x];
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