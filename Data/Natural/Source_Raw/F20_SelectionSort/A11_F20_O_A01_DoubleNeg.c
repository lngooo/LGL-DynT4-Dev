/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A11_F20_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int i = 0;
    while (!!(i < n - 1)) {
        int min_p = i, j = i + 1;
        while (!!(j < n)) {
            if (!!(arr[j] < arr[min_p])) min_p = j;
            j++;
        }
        int tmp = arr[min_p]; arr[min_p] = arr[i]; arr[i] = tmp;
        i++;
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