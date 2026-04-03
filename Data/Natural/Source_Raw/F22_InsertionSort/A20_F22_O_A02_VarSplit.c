/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A20_F22_O_A02_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InsertionSort(int arr[], int n) {
    int start = 1;
    while (start < n) {
        int target = arr[start];
        int l = 0, r = start - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] > target) r = m - 1;
            else l = m + 1;
        }
        for (int k = start - 1; k >= l; k--) arr[k+1] = arr[k];
        arr[l] = target;
        start++;
    }
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