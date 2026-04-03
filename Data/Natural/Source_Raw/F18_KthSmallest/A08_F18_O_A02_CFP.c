/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A08_F18_O_A02_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KthSmallest(int arr[], int l, int r, int k) {
    int state = 0;
    while (state != 2) {
        switch (state) {
            case 0: if (l <= r) state = 1; else state = 2; break;
            case 1: {
                int p = arr[r], i = l;
                for (int j = l; j < r; j++) if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
                int t=arr[i]; arr[i]=arr[r]; arr[r]=t;
                if (i == k - 1) return arr[i];
                if (i > k - 1) r = i - 1; else l = i + 1;
                state = 0; break;
            }
        }
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