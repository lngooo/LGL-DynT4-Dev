/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A12_F20_O_A02_Bitwise.c
 * Implementation Logic: Bitwise
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int *m = arr + i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *m) m = arr + j;
        }
        if (m != (arr + i)) {
            *m ^= arr[i]; arr[i] ^= *m; *m ^= arr[i];
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}