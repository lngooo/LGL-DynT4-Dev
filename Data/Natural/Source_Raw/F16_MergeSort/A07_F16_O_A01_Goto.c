/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A07_F16_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    if (l >= r) goto exit;
    int m = (l + r) / 2;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);
    {
        int i = l, j = m + 1, k = 0;
        int *t = (int*)malloc((r-l+1)*4);
    m_loop:
        if (i > m) goto fill_r;
        if (j > r) goto fill_l;
        if (arr[i] <= arr[j]) { t[k++] = arr[i++]; goto m_loop; }
        else { t[k++] = arr[j++]; goto m_loop; }
    fill_l:
        if (i > m) goto sync;
        t[k++] = arr[i++]; goto fill_l;
    fill_r:
        if (j > r) goto sync;
        t[k++] = arr[j++]; goto fill_r;
    sync:
        for(int x=0; x<k; x++) arr[l+x] = t[x];
        free(t);
    }
    exit:;
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