/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A21_F18_O_A01_PtrArithmetic.c
 * Implementation Logic: PtrArithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    if (l > r) return -1;
    int pivot = *(arr + r), i = l;
    for (int j = l; j < r; j++) {
        if (*(arr + j) <= pivot) {
            int t = *(arr + i); *(arr + i) = *(arr + j); *(arr + j) = t;
            i++;
        }
    }
    int t = *(arr + i); *(arr + i) = *(arr + r); *(arr + r) = t;
    if (i == k - 1) return *(arr + i);
    return (i > k - 1) ? KthSmallest(arr, l, i - 1, k) : KthSmallest(arr, i + 1, r, k);
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