/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A20_F18_O_A03_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    int n_len = r - l + 1;
    for (int i = 0; i < n_len; i++) {
        for (int j = i + 1; j < n_len; j++) {
            int a = arr[i], b = arr[j];
            if (a > b) { arr[i] = b; arr[j] = a; }
        }
    }
    return arr[k - 1];
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