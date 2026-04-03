/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A06_F13_S_PointerSwap.c
 * Implementation Logic: PointerSwap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int *piv_ptr = arr + high;
    int *left = arr + low;
    for (int *curr = arr + low; curr < piv_ptr; curr++) {
        if (*curr < *piv_ptr) {
            int tmp = *curr; *curr = *left; *left = tmp;
            left++;
        }
    }
    int tmp = *left; *left = *piv_ptr; *piv_ptr = tmp;
    QuickSort(arr, low, (int)(left - arr) - 1);
    QuickSort(arr, (int)(left - arr) + 1, high);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}