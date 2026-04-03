/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A08_F20_O_A01_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int state = 0, i = 0, m, j;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n - 1) ? 1 : 3; break;
            case 1: m = i; j = i + 1; state = 2; break;
            case 2:
                for (; j < n; j++) if (arr[j] < arr[m]) m = j;
                int t = arr[m]; arr[m] = arr[i]; arr[i] = t;
                i++; state = 0; break;
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