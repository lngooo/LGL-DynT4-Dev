/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A09_F16_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) >> 1;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int n1 = m - l + 1, n2 = r - m;
        int L[64], R[64];
        for(int i=0; i<n1; i++) L[i] = arr[l+i];
        for(int j=0; j<n2; j++) R[j] = arr[m+1+j];
        L[n1] = ~(1 << 31); R[n2] = ~(1 << 31);
        int i = 0, j = 0;
        for(int k=l; k<=r; k++) {
            int cmp = (L[i] <= R[j]);
            arr[k] = cmp ? L[i++] : R[j++];
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