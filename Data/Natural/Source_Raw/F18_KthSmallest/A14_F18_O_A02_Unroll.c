/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A14_F18_O_A02_Unroll.c
 * Implementation Logic: Unroll
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    while (l <= r) {
        int p = arr[r], i = l, j = l;
        for (; j < r - 1; j += 2) {
            if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
            if (arr[j+1] <= p) { int t=arr[i]; arr[i]=arr[j+1]; arr[j+1]=t; i++; }
        }
        for (; j < r; j++) if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
        int t=arr[i]; arr[i]=arr[r]; arr[r]=t;
        if (i == k - 1) return arr[i];
        if (i > k - 1) r = i - 1; else l = i + 1;
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