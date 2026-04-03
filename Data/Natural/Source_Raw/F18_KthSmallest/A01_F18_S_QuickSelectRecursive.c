/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A01_F18_S_QuickSelectRecursive.c
 * Implementation Logic: QuickSelectRecursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {
        int pivot = arr[r], i = l;
        for (int j = l; j < r; j++) {
            if (arr[j] <= pivot) {
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
                i++;
            }
        }
        int t = arr[i]; arr[i] = arr[r]; arr[r] = t;
        int pos = i;
        if (pos - l == k - 1) return arr[pos];
        if (pos - l > k - 1) return KthSmallest(arr, l, pos - 1, k);
        return KthSmallest(arr, pos + 1, r, k - pos + l - 1);
    }
    return -1;
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