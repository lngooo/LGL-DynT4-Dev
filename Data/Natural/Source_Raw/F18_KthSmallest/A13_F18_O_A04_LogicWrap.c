/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A13_F18_O_A04_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    int n = r - l + 1;
    for (int i = 0; i < k; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) if (arr[j] < arr[m]) m = j;
        int t = arr[i]; arr[i] = arr[m]; arr[m] = t;
    }
    return arr[k-1];
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