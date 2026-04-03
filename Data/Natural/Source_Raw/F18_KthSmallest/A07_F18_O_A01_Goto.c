/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A07_F18_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    int left = l, right = r;
start:
    if (left > right) return -1;
    int p = arr[right], i = left, j = left;
partition:
    if (j >= right) goto done;
    if (arr[j] > p) { j++; goto partition; }
    { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; i++; j++; goto partition; }
done:
    { int t = arr[i]; arr[i] = arr[right]; arr[right] = t; }
    if (i == k - 1) return arr[i];
    if (i > k - 1) { right = i - 1; goto start; }
    left = i + 1; goto start;
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