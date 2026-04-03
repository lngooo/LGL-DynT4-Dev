/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A17_F16_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    MergeSort(arr, l, m); MergeSort(arr, m + 1, r);
    int *t = (int*)malloc((r-l+1)*4), i=l, j=m+1, k=0;
    while (1) {
        if (i > m && j > r) break;
        if (i <= m && (j > r || arr[i] <= arr[j])) t[k++] = arr[i++];
        else t[k++] = arr[j++];
    }
    for (int x=0; x<k; x++) arr[l+x] = t[x];
    free(t);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}