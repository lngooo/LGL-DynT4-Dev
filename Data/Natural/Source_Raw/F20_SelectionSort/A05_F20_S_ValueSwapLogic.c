/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A05_F20_S_ValueSwapLogic.c
 * Implementation Logic: ValueSwapLogic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int curr_min = arr[i];
        int target_pos = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < curr_min) {
                curr_min = arr[j];
                target_pos = j;
            }
        }
        arr[target_pos] = arr[i];
        arr[i] = curr_min;
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