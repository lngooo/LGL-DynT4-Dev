/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A19_F18_O_A01_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    int p1 = l, p2 = r;
    if (p1 > p2) return -1;
    int pivot = arr[p2], i_ptr = p1;
    for (int j_ptr = p1; j_ptr < p2; j_ptr++) {
        if (arr[j_ptr] <= pivot) { int tmp = arr[i_ptr]; arr[i_ptr] = arr[j_ptr]; arr[j_ptr] = tmp; i_ptr++; }
    }
    int tmp = arr[i_ptr]; arr[i_ptr] = arr[p2]; arr[p2] = tmp;
    if (i_ptr == k - 1) return arr[i_ptr];
    return (i_ptr > k - 1) ? KthSmallest(arr, p1, i_ptr - 1, k) : KthSmallest(arr, i_ptr + 1, p2, k);
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