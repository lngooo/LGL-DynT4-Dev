/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A05_F18_S_HoarePartition.c
 * Implementation Logic: HoarePartition
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    if (l == r) return arr[l];
    int p = arr[l], i = l - 1, j = r + 1;
    while (1) {
        do { i++; } while (arr[i] < p);
        do { j--; } while (arr[j] > p);
        if (i >= j) break;
        int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
    }
    int pos = j;
    if (pos - l >= k - 1) return KthSmallest(arr, l, pos, k);
    return KthSmallest(arr, pos + 1, r, k - (pos - l + 1));
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    int k = atoi(argv[1]);
    int n = argc - 2;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int result = KthSmallest(arr, 0, n - 1, k);

    printf("%d\n", result);
    free(arr);
    return 0;
}