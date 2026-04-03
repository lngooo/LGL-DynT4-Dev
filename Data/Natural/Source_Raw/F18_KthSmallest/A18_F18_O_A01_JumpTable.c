/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A18_F18_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    if (l > r) return -1;
    int p = arr[r], i = l;
    for (int j = l; j < r; j++) if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
    int t=arr[i]; arr[i]=arr[r]; arr[r]=t;
    int diff = i - (k - 1);
    if (diff == 0) return arr[i];
    goto *(&&label_high + (diff > 0 ? 0 : (&&label_low - &&label_high)));
label_high:
    return KthSmallest(arr, l, i - 1, k);
label_low:
    return KthSmallest(arr, i + 1, r, k);
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