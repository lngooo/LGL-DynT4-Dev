/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A16_F20_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((i * i + 1) > 0) {
            int target = i;
            for (int j = i + 1; j < n; j++) if (arr[j] < arr[target]) target = j;
            int tmp = arr[i]; arr[i] = arr[target]; arr[target] = tmp;
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