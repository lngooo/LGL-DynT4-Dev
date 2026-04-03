/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A08_F22_O_A01_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InsertionSort(int arr[], int n) {
    int state = 0, i = 1, j, k;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 3; break;
            case 1: k = arr[i]; j = i - 1; state = 2; break;
            case 2:
                while (j >= 0 && arr[j] > k) { arr[j+1] = arr[j]; j--; }
                arr[j+1] = k; i++; state = 0; break;
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