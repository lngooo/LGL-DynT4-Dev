/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A16_F22_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if ((i * i + 1) > 0) {
            int key = arr[i], j = i - 1;
            while (j >= 0 && arr[j] > key) { arr[j+1] = arr[j]; j--; }
            arr[j+1] = key;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}