/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A16_F16_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        if ((m * m + 1) > 0) {
            MergeSort(arr, l, m);
            MergeSort(arr, m + 1, r);
            int *t = (int*)malloc((r-l+1)*4), i=l, j=m+1, k=0;
            while(i<=m && j<=r) t[k++] = (arr[i]<=arr[j]) ? arr[i++] : arr[j++];
            while(i<=m) t[k++] = arr[i++]; while(j<=r) t[k++] = arr[j++];
            for(int x=0; x<k; x++) arr[l+x] = t[x];
            free(t);
        }
    }
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