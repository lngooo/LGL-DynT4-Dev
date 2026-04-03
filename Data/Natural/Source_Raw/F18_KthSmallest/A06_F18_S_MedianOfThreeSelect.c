/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A06_F18_S_MedianOfThreeSelect.c
 * Implementation Logic: MedianOfThreeSelect
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    int mid = l + (r - l) / 2;
    if (arr[mid] < arr[l]) { int t=arr[mid]; arr[mid]=arr[l]; arr[l]=t; }
    if (arr[r] < arr[l]) { int t=arr[r]; arr[r]=arr[l]; arr[l]=t; }
    if (arr[r] < arr[mid]) { int t=arr[r]; arr[r]=arr[mid]; arr[mid]=t; }
    int p = arr[mid];
    int i = l, j = r;
    while (i <= j) {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;
        if (i <= j) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; j--; }
    }
    if (k - 1 <= j - l) return KthSmallest(arr, l, j, k);
    if (k - 1 >= i - l) return KthSmallest(arr, i, r, k - (i - l));
    return arr[j+1];
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